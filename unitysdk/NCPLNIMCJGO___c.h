#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCPLNIMCJGO;
namespace System { class Object; }

#define NCPLNIMCJGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE23E00)
#define NCPLNIMCJGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE23E40)
#define NCPLNIMCJGO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FE23E50)

inline static constexpr unsigned int NCPLNIMCJGO___c_TypeDefinitionIndex = 29990;

	class NCPLNIMCJGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCPLNIMCJGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPLNIMCJGO___C_CTOR_OFFSET))(this);
		}

		::NCPLNIMCJGO* __cctor_b__28_0()
		{
			return ((::NCPLNIMCJGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPLNIMCJGO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
