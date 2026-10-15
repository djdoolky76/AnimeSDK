#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIGLFKLHBGD.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define NINEMEMDNBK_BPJBKOFJNAK_OFFSET UNITYSDK_OFFSET(0x1C4985A0)
#define NINEMEMDNBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4988C0)
#define NINEMEMDNBK_CDMPHHBNFGG_OFFSET UNITYSDK_OFFSET(0x1C472F30)
#define NINEMEMDNBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4742A0)
#define NINEMEMDNBK_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x1C472E80)
#define NINEMEMDNBK_FNBFMBOONIL_OFFSET UNITYSDK_OFFSET(0x1C473AB0)
#define NINEMEMDNBK_JAEBKKNNKGN_OFFSET UNITYSDK_OFFSET(0x1C4982C0)
#define NINEMEMDNBK_JPGDCIEDGDK_OFFSET UNITYSDK_OFFSET(0x1C473630)
#define NINEMEMDNBK_NNJEEBMBJIP_OFFSET UNITYSDK_OFFSET(0x1C498320)
#define NINEMEMDNBK_PNLBLBCKPGH_OFFSET UNITYSDK_OFFSET(0x1C498640)

inline static constexpr unsigned int NINEMEMDNBK_TypeDefinitionIndex = 41514;

	class NINEMEMDNBK : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* ODJHNBMEDGB; // 0x10
		::Il2CppArray<::CIGLFKLHBGD>* ICGBJKOMOHK; // 0x18
		::Il2CppArray<::System::UInt32>* IIKCHBKIIBH; // 0x20
		::System::UInt32 ELECBBOHPEE; // 0x28
		::System::Int32 JAAGEILMMED; // 0x2C
		::System::UInt32 NDKEGAADDHI; // 0x30
		static ::Il2CppArray<::System::Byte>** StaticGet_GKHLLBJIACH()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("", "NINEMEMDNBK")->GetStaticField(0x1D3B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEMEMDNBK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NINEMEMDNBK_CCTOR_OFFSET))();
		}

		::System::Void DLAILGNMFGI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NINEMEMDNBK_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::System::Boolean CDMPHHBNFGG(::System::Int32 a1, ::PVOID a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NINEMEMDNBK_CDMPHHBNFGG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JAEBKKNNKGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEMEMDNBK_JAEBKKNNKGN_OFFSET))(this);
		}

		::System::Boolean JPGDCIEDGDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEMEMDNBK_JPGDCIEDGDK_OFFSET))(this);
		}

		::System::Void FNBFMBOONIL(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + NINEMEMDNBK_FNBFMBOONIL_OFFSET))(this, a1);
		}

		::System::Void PNLBLBCKPGH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NINEMEMDNBK_PNLBLBCKPGH_OFFSET))(this, a1);
		}

		::System::Void BPJBKOFJNAK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NINEMEMDNBK_BPJBKOFJNAK_OFFSET))(this, a1);
		}

		::System::Void NNJEEBMBJIP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NINEMEMDNBK_NNJEEBMBJIP_OFFSET))(this, a1);
		}

	};
