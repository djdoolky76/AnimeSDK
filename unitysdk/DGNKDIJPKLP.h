#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HHIIMKCHHDI.h"

class ANHBKMILIDH;
class DGNKDIJPKLP_AEFOJOPBIOJ;
class DGNKDIJPKLP_BPGEJNMGFHL;
class DGNKDIJPKLP_FPGALJEBBEK;
class DGNKDIJPKLP_OICLLJKPJOI;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGNKDIJPKLP_CBJFHMJLPBC_OFFSET UNITYSDK_OFFSET(0x13E4D330)
#define DGNKDIJPKLP_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x13E4D180)
#define DGNKDIJPKLP_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x13E4D9D0)
#define DGNKDIJPKLP_LABBDLFFCIG_OFFSET UNITYSDK_OFFSET(0x13E4CD70)
#define DGNKDIJPKLP__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E4CC60)

inline static constexpr unsigned int DGNKDIJPKLP_TypeDefinitionIndex = 73384;

class DGNKDIJPKLP : public ::System::Object
{
public:
	static ::System::String** StaticGet_AEMDKPLIADH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DGNKDIJPKLP_TypeDefinitionIndex)->GetStaticField(0x4E2C0);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_FJCFIJMLNPO()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DGNKDIJPKLP_TypeDefinitionIndex)->GetStaticField(0x4E2C8);
	}
	static ::DGNKDIJPKLP_FPGALJEBBEK** StaticGet_LJIIBMPJEAJ()
	{
		return (::DGNKDIJPKLP_FPGALJEBBEK**)Il2CppClass::FromTypeDefinitionIndex(DGNKDIJPKLP_TypeDefinitionIndex)->GetStaticField(0x4E2D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Object*>*>** StaticGet_EPCPJEEMOAK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(DGNKDIJPKLP_TypeDefinitionIndex)->GetStaticField(0x4E2D8);
	}
	static ::DGNKDIJPKLP_OICLLJKPJOI** StaticGet_PNJPPIDOJAF()
	{
		return (::DGNKDIJPKLP_OICLLJKPJOI**)Il2CppClass::FromTypeDefinitionIndex(DGNKDIJPKLP_TypeDefinitionIndex)->GetStaticField(0x4E2E0);
	}
	static ::DGNKDIJPKLP_AEFOJOPBIOJ** StaticGet_MBFFEIIHCPL()
	{
		return (::DGNKDIJPKLP_AEFOJOPBIOJ**)Il2CppClass::FromTypeDefinitionIndex(DGNKDIJPKLP_TypeDefinitionIndex)->GetStaticField(0x4E2E8);
	}
	static ::DGNKDIJPKLP_BPGEJNMGFHL** StaticGet_GNHPECIFJCO()
	{
		return (::DGNKDIJPKLP_BPGEJNMGFHL**)Il2CppClass::FromTypeDefinitionIndex(DGNKDIJPKLP_TypeDefinitionIndex)->GetStaticField(0x4E2F0);
	}
	// static const ::System::String* FCEKBDPHOJH; // 0x0
	// static const ::System::String* MLFLHNCCEBJ; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGNKDIJPKLP__CCTOR_OFFSET))();
	}

	static ::System::String* LABBDLFFCIG(::HHIIMKCHHDI CJBJONJDOLI)
	{
		return ((::System::String*(*)(::HHIIMKCHHDI))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_LABBDLFFCIG_OFFSET))(CJBJONJDOLI);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void CBJFHMJLPBC(::ANHBKMILIDH* DFMKILICPFB)
	{
		return ((::System::Void(*)(::ANHBKMILIDH*))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_CBJFHMJLPBC_OFFSET))(DFMKILICPFB);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
