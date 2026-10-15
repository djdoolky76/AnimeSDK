#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFF20F0)

namespace System::ComponentModel
{
	class ReferenceConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		static ::System::String** StaticGet_none()
		{
			return (::System::String**)UnitySDK::FromName("System.ComponentModel", "ReferenceConverter")->GetStaticField(0x3B6D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CCTOR_OFFSET))();
		}

	};
}
