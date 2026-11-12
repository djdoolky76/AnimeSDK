#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOLAHHGIFHA;
namespace System { class Object; }

#define JOLAHHGIFHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAD63C0)
#define JOLAHHGIFHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD63F0)
#define JOLAHHGIFHA___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1FAD6400)

inline static constexpr unsigned int JOLAHHGIFHA___c_TypeDefinitionIndex = 26386;

	class JOLAHHGIFHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOLAHHGIFHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAHHGIFHA___C_CTOR_OFFSET))(this);
		}

		::JOLAHHGIFHA* __cctor_b__58_0()
		{
			return ((::JOLAHHGIFHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAHHGIFHA___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
