#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class EBPKIAGDKPA;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMDJJNLHBIF_AJJPLLJLOBM_OFFSET UNITYSDK_OFFSET(0x10E0EFA0)
#define BMDJJNLHBIF_CHBAOBCFLFB_OFFSET UNITYSDK_OFFSET(0x10E0E750)
#define BMDJJNLHBIF_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x10E0F380)
#define BMDJJNLHBIF_DBJBPIIIOKL_OFFSET UNITYSDK_OFFSET(0x10E0F6E0)
#define BMDJJNLHBIF_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x10E0F270)
#define BMDJJNLHBIF_ECLDINFNPMM_OFFSET UNITYSDK_OFFSET(0x10E0F980)
#define BMDJJNLHBIF_IOFAFJFOIEH_OFFSET UNITYSDK_OFFSET(0x10E0EA40)
#define BMDJJNLHBIF_MFNAOHBKBNK_OFFSET UNITYSDK_OFFSET(0x10E0FA10)
#define BMDJJNLHBIF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x10E0E930)
#define BMDJJNLHBIF__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E0E6B0)

inline static constexpr unsigned int BMDJJNLHBIF_TypeDefinitionIndex = 75415;

class BMDJJNLHBIF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>** StaticGet_DDLDFCAIKLP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>**)Il2CppClass::FromTypeDefinitionIndex(BMDJJNLHBIF_TypeDefinitionIndex)->GetStaticField(0x3D4F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMDJJNLHBIF__CCTOR_OFFSET))();
	}

	static ::System::Void CHBAOBCFLFB(::Foundation::AssetPath PJNJFACFJHP, ::System::Action_1<::Foundation::AssetRequestHandle>* IBNICCGMILF)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::System::Action_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_CHBAOBCFLFB_OFFSET))(PJNJFACFJHP, IBNICCGMILF);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMDJJNLHBIF_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::Boolean IOFAFJFOIEH(::Foundation::AssetPath PJNJFACFJHP)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_IOFAFJFOIEH_OFFSET))(PJNJFACFJHP);
	}

	static ::System::Void AJJPLLJLOBM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMDJJNLHBIF_AJJPLLJLOBM_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::EBPKIAGDKPA* DBJBPIIIOKL(::System::Int32 HKHHHJHCGKL)
	{
		return ((::EBPKIAGDKPA*(*)(::System::Int32))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_DBJBPIIIOKL_OFFSET))(HKHHHJHCGKL);
	}

	static ::System::Collections::IEnumerator* ECLDINFNPMM(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_ECLDINFNPMM_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* MFNAOHBKBNK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + BMDJJNLHBIF_MFNAOHBKBNK_OFFSET))();
	}
};
