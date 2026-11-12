#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POFCEIPNOBI;
namespace System { class Object; }

#define POFCEIPNOBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F27A9D0)
#define POFCEIPNOBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F27AA00)
#define POFCEIPNOBI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F27AA10)

inline static constexpr unsigned int POFCEIPNOBI___c_TypeDefinitionIndex = 31436;

	class POFCEIPNOBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POFCEIPNOBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFCEIPNOBI___C_CTOR_OFFSET))(this);
		}

		::POFCEIPNOBI* __cctor_b__28_0()
		{
			return ((::POFCEIPNOBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFCEIPNOBI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
