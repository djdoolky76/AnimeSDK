#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJNHIKIGKJC;
namespace System { class Object; }

#define JJNHIKIGKJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7632F0)
#define JJNHIKIGKJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E763320)
#define JJNHIKIGKJC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E763330)

inline static constexpr unsigned int JJNHIKIGKJC___c_TypeDefinitionIndex = 27556;

	class JJNHIKIGKJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x654E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJNHIKIGKJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNHIKIGKJC___C_CTOR_OFFSET))(this);
		}

		::JJNHIKIGKJC* __cctor_b__28_0()
		{
			return ((::JJNHIKIGKJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNHIKIGKJC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
