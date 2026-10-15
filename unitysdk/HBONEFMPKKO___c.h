#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBONEFMPKKO;
namespace System { class Object; }

#define HBONEFMPKKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5032F0)
#define HBONEFMPKKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E503330)
#define HBONEFMPKKO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E503340)

inline static constexpr unsigned int HBONEFMPKKO___c_TypeDefinitionIndex = 31774;

	class HBONEFMPKKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBONEFMPKKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBONEFMPKKO___C_CTOR_OFFSET))(this);
		}

		::HBONEFMPKKO* __cctor_b__28_0()
		{
			return ((::HBONEFMPKKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBONEFMPKKO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
