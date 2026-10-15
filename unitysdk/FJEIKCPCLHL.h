#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define FJEIKCPCLHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD3CE10)

inline static constexpr unsigned int FJEIKCPCLHL_TypeDefinitionIndex = 6366;

	class FJEIKCPCLHL : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_BFFHCMLIMCH()
		{
			return (::System::Object**)UnitySDK::FromName("", "FJEIKCPCLHL")->GetStaticField(0x24370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJEIKCPCLHL_CCTOR_OFFSET))();
		}

	};
