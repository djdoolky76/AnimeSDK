#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAALDKHKOLE;
namespace System { class Object; }

#define PAALDKHKOLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2036FFE0)
#define PAALDKHKOLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20370010)
#define PAALDKHKOLE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20370020)

inline static constexpr unsigned int PAALDKHKOLE___c_TypeDefinitionIndex = 26460;

	class PAALDKHKOLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BD50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAALDKHKOLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAALDKHKOLE___C_CTOR_OFFSET))(this);
		}

		::PAALDKHKOLE* __cctor_b__28_0()
		{
			return ((::PAALDKHKOLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAALDKHKOLE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
