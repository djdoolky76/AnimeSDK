#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class FuncUnlockUiData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OOPCNPHPMHI_CTOR_OFFSET UNITYSDK_OFFSET(0xBF8DFA0)
#define OOPCNPHPMHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF8E650)
#define OOPCNPHPMHI_GCBHJJHEOAO_OFFSET UNITYSDK_OFFSET(0xBF8DF00)
#define OOPCNPHPMHI_GJHHNIDKKJD_OFFSET UNITYSDK_OFFSET(0xBF8E3C0)
#define OOPCNPHPMHI_NKOICLEPKFF_OFFSET UNITYSDK_OFFSET(0xBF8E0B0)
#define OOPCNPHPMHI_OKPBJMMOJHN_OFFSET UNITYSDK_OFFSET(0xBF8DEC0)

inline static constexpr unsigned int OOPCNPHPMHI_TypeDefinitionIndex = 75326;

	class OOPCNPHPMHI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::FuncUnlockUiData*>* EJFNNGMBNLH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* DPNPGDHCFBH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPCNPHPMHI_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::FuncUnlockUiData*>* OKPBJMMOJHN()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::FuncUnlockUiData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPCNPHPMHI_OKPBJMMOJHN_OFFSET))(this);
		}

		::System::Void GCBHJJHEOAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPCNPHPMHI_GCBHJJHEOAO_OFFSET))(this);
		}

		::System::Void NKOICLEPKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPCNPHPMHI_NKOICLEPKFF_OFFSET))(this);
		}

		::System::Void GJHHNIDKKJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOPCNPHPMHI_GJHHNIDKKJD_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPCNPHPMHI_DISPOSE_OFFSET))(this);
		}

	};
