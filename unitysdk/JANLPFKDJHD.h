#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigEntityJoystickOrder;
class NBCIGBMMOPB;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JANLPFKDJHD_ADMKBHNLNEG_OFFSET UNITYSDK_OFFSET(0x165988C0)
#define JANLPFKDJHD_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x165980A0)
#define JANLPFKDJHD_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x165987B0)
#define JANLPFKDJHD_PBAIDDDBDIO_OFFSET UNITYSDK_OFFSET(0x16598350)
#define JANLPFKDJHD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16597F30)

inline static constexpr unsigned int JANLPFKDJHD_TypeDefinitionIndex = 86073;

class JANLPFKDJHD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::ConfigEntityJoystickOrder*, ::System::Int32>** StaticGet_MKIGJMCLKDJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::ConfigEntityJoystickOrder*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JANLPFKDJHD_TypeDefinitionIndex)->GetStaticField(0x514D0);
	}
	static ::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>** StaticGet_FBOKCAENFBA()
	{
		return (::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>**)Il2CppClass::FromTypeDefinitionIndex(JANLPFKDJHD_TypeDefinitionIndex)->GetStaticField(0x514D8);
	}
	static ::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>** StaticGet_PPEPGNPHKOA()
	{
		return (::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>**)Il2CppClass::FromTypeDefinitionIndex(JANLPFKDJHD_TypeDefinitionIndex)->GetStaticField(0x514E0);
	}
	static ::System::Int32* StaticGet_GGNJIPCNNHF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(JANLPFKDJHD_TypeDefinitionIndex)->GetStaticField(0x13480);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JANLPFKDJHD__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + JANLPFKDJHD_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>* PBAIDDDBDIO(::NBCIGBMMOPB* DAEJMBDKILA, ::System::Int32 KIKOCMNOKHO)
	{
		return ((::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>*(*)(::NBCIGBMMOPB*, ::System::Int32))((::PBYTE)hIl2Cpp + JANLPFKDJHD_PBAIDDDBDIO_OFFSET))(DAEJMBDKILA, KIKOCMNOKHO);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + JANLPFKDJHD_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Int32 ADMKBHNLNEG()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + JANLPFKDJHD_ADMKBHNLNEG_OFFSET))();
	}
};
