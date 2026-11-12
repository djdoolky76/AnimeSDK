#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHIJMGKPIMF_AssetStatus.h"
#include "unitysdk/System/Object.h"
class AHIJMGKPIMF;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define AHIJMGKPIMF_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xF143270)
#define AHIJMGKPIMF_BJGIPJPOOJI_OFFSET UNITYSDK_OFFSET(0xF142EF0)
#define AHIJMGKPIMF_CLEAR_OFFSET UNITYSDK_OFFSET(0xF1428B0)
#define AHIJMGKPIMF_CTOR_OFFSET UNITYSDK_OFFSET(0xF142820)
#define AHIJMGKPIMF_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0xF143120)
#define AHIJMGKPIMF_EPELDMNMFEJ_OFFSET UNITYSDK_OFFSET(0xF142A20)
#define AHIJMGKPIMF_FMPLJNILOPP_OFFSET UNITYSDK_OFFSET(0xF143410)
#define AHIJMGKPIMF_GMNIIPCFFOE_OFFSET UNITYSDK_OFFSET(0xF142B00)
#define AHIJMGKPIMF_GPKPDMJGIHF_OFFSET UNITYSDK_OFFSET(0xF142E20)
#define AHIJMGKPIMF_HFDJKMPIHAM_OFFSET UNITYSDK_OFFSET(0xF142D70)
#define AHIJMGKPIMF_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xF142F70)
#define AHIJMGKPIMF_ILDPJNPHNLK_OFFSET UNITYSDK_OFFSET(0xF142970)
#define AHIJMGKPIMF_JEBAIOBMCIC_OFFSET UNITYSDK_OFFSET(0xF1430D0)
#define AHIJMGKPIMF_KFDJANKMJBA_OFFSET UNITYSDK_OFFSET(0xF142BB0)
#define AHIJMGKPIMF_LADMGDAOLOD_OFFSET UNITYSDK_OFFSET(0xF142C90)
#define AHIJMGKPIMF_LLFPEANIJIC_OFFSET UNITYSDK_OFFSET(0xF142EB0)
#define AHIJMGKPIMF_MGONIFKEDDL_OFFSET UNITYSDK_OFFSET(0xF143590)
#define AHIJMGKPIMF_NHPLOMPLMFE_OFFSET UNITYSDK_OFFSET(0xF143320)
#define AHIJMGKPIMF_OIFBALMLODK_OFFSET UNITYSDK_OFFSET(0xF142C40)
#define AHIJMGKPIMF_OIPIANCDINE_OFFSET UNITYSDK_OFFSET(0xF1429D0)
#define AHIJMGKPIMF_OPFNIIGKGMG_OFFSET UNITYSDK_OFFSET(0xF142F30)

inline static constexpr unsigned int AHIJMGKPIMF_TypeDefinitionIndex = 73330;

	class AHIJMGKPIMF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Action_1<::AHIJMGKPIMF*>*>* GIKNFBMJDFJ; // 0x10
		::System::String* LBMJJOOCCBD; // 0x18
		::System::Collections::Generic::List_1<::System::Action_1<::AHIJMGKPIMF*>*>* FKMFGHPMJKI; // 0x20
		::RPG::Client::IAssetOperation* CCFIHJJGBFN; // 0x28
		::RPG::Client::OnAssetOperationDelegate* FKLFJNPOPEA; // 0x30
		::System::Type* FEAPBKECDPL; // 0x38
		::UnityEngine::Object* ODGHHCHLMOP; // 0x40
		::AHIJMGKPIMF_AssetStatus JOPNMBKICND; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_CLEAR_OFFSET))(this);
		}

		::System::Void ILDPJNPHNLK(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_ILDPJNPHNLK_OFFSET))(this, a1, a2);
		}

		::System::Void OIPIANCDINE(::System::Action_1<::AHIJMGKPIMF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::AHIJMGKPIMF*>*))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_OIPIANCDINE_OFFSET))(this, a1);
		}

		::System::Void GMNIIPCFFOE(::System::Action_1<::AHIJMGKPIMF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::AHIJMGKPIMF*>*))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_GMNIIPCFFOE_OFFSET))(this, a1);
		}

		::System::Void OIFBALMLODK(::System::Action_1<::AHIJMGKPIMF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::AHIJMGKPIMF*>*))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_OIFBALMLODK_OFFSET))(this, a1);
		}

		::System::Void HFDJKMPIHAM(::System::Action_1<::AHIJMGKPIMF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::AHIJMGKPIMF*>*))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_HFDJKMPIHAM_OFFSET))(this, a1);
		}

		::System::Void EPELDMNMFEJ(::System::Action_1<::AHIJMGKPIMF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::AHIJMGKPIMF*>*))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_EPELDMNMFEJ_OFFSET))(this, a1);
		}

		::System::Void LADMGDAOLOD(::System::Action_1<::AHIJMGKPIMF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::AHIJMGKPIMF*>*))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_LADMGDAOLOD_OFFSET))(this, a1);
		}

		::System::Void KFDJANKMJBA(::System::Action_1<::AHIJMGKPIMF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::AHIJMGKPIMF*>*))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_KFDJANKMJBA_OFFSET))(this, a1);
		}

		::System::Void GPKPDMJGIHF(::System::Action_1<::AHIJMGKPIMF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::AHIJMGKPIMF*>*))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_GPKPDMJGIHF_OFFSET))(this, a1);
		}

		::System::Type* LLFPEANIJIC()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_LLFPEANIJIC_OFFSET))(this);
		}

		::System::String* BJGIPJPOOJI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_BJGIPJPOOJI_OFFSET))(this);
		}

		::UnityEngine::Object* OPFNIIGKGMG()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_OPFNIIGKGMG_OFFSET))(this);
		}

		::System::Void HKEPJLDBGIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_HKEPJLDBGIG_OFFSET))(this);
		}

		::System::Void EGKNKHEANAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_EGKNKHEANAN_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Boolean FMPLJNILOPP(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_FMPLJNILOPP_OFFSET))(this, a1);
		}

		::System::Void JEBAIOBMCIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_JEBAIOBMCIC_OFFSET))(this);
		}

		::System::Void MGONIFKEDDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_MGONIFKEDDL_OFFSET))(this);
		}

		::System::Void NHPLOMPLMFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIJMGKPIMF_NHPLOMPLMFE_OFFSET))(this);
		}

	};
