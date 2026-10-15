#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFEOGNAMHCG;
class HGAAAOGMIJB;
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGAAAOGMIJB_APNMFDCHMDG_OFFSET UNITYSDK_OFFSET(0x15C8E590)
#define HGAAAOGMIJB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15C8E210)
#define HGAAAOGMIJB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8E200)
#define HGAAAOGMIJB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C8E310)
#define HGAAAOGMIJB_LFIFAIBEKFH_OFFSET UNITYSDK_OFFSET(0x15C8E5E0)
#define HGAAAOGMIJB_OONBFNBCNDA_OFFSET UNITYSDK_OFFSET(0x15C8E9F0)
#define HGAAAOGMIJB_PJFKNFMDIDK_OFFSET UNITYSDK_OFFSET(0x15C8E3B0)

inline static constexpr unsigned int HGAAAOGMIJB_TypeDefinitionIndex = 67399;

	class HGAAAOGMIJB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HFEOGNAMHCG*>* LCLLBKAEOHN; // 0x10
		::System::Boolean PFDKDELAJEC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAAOGMIJB_CTOR_OFFSET))(this);
		}

		static ::HGAAAOGMIJB* BPLPBPMEODA(::System::Collections::Generic::List_1<::HFEOGNAMHCG*>* a1)
		{
			return ((::HGAAAOGMIJB*(*)(::System::Collections::Generic::List_1<::HFEOGNAMHCG*>*))((::PBYTE)hIl2Cpp + HGAAAOGMIJB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAAOGMIJB_DISPOSE_OFFSET))(this);
		}

		::System::Void PJFKNFMDIDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAAOGMIJB_PJFKNFMDIDK_OFFSET))(this);
		}

		::System::Func_1<::RPG::Client::Promises::IPromise*>* LFIFAIBEKFH(::HFEOGNAMHCG* a1)
		{
			return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::HFEOGNAMHCG*))((::PBYTE)hIl2Cpp + HGAAAOGMIJB_LFIFAIBEKFH_OFFSET))(this, a1);
		}

		::System::Void OONBFNBCNDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAAOGMIJB_OONBFNBCNDA_OFFSET))(this);
		}

		::System::Boolean APNMFDCHMDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAAOGMIJB_APNMFDCHMDG_OFFSET))(this);
		}

	};
