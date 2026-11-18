#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDAGGNNDKIL;
class HDHDMICLMFL;
class NILAHGKDJNN;
class NOBGGKJMEFG_ACHNDDOEBPB;
class NOBGGKJMEFG_MEBOJGPIFGK;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOBGGKJMEFG_AACEHEJPCGI_OFFSET UNITYSDK_OFFSET(0x115AE770)
#define NOBGGKJMEFG_DCCKGPDKDJC_1_OFFSET UNITYSDK_OFFSET(0x115AEBD0)
#define NOBGGKJMEFG_DCCKGPDKDJC_OFFSET UNITYSDK_OFFSET(0x115AEA70)
#define NOBGGKJMEFG_GBCGCOACOOE_OFFSET UNITYSDK_OFFSET(0x115AED20)
#define NOBGGKJMEFG_JDFIHGKPHNN_OFFSET UNITYSDK_OFFSET(0x115AE8C0)
#define NOBGGKJMEFG_MPGJJHIHOFL_1_OFFSET UNITYSDK_OFFSET(0x115AEE80)
#define NOBGGKJMEFG_MPGJJHIHOFL_OFFSET UNITYSDK_OFFSET(0x115AE630)
#define NOBGGKJMEFG__CCTOR_OFFSET UNITYSDK_OFFSET(0x115AE620)

inline static constexpr unsigned int NOBGGKJMEFG_TypeDefinitionIndex = 46800;

class NOBGGKJMEFG : public ::System::Object
{
public:
	static ::NOBGGKJMEFG_ACHNDDOEBPB** StaticGet_NAEGHDOOKPB()
	{
		return (::NOBGGKJMEFG_ACHNDDOEBPB**)Il2CppClass::FromTypeDefinitionIndex(NOBGGKJMEFG_TypeDefinitionIndex)->GetStaticField(0x46A50);
	}
	static ::NOBGGKJMEFG_MEBOJGPIFGK** StaticGet_CIJPDPCMBOM()
	{
		return (::NOBGGKJMEFG_MEBOJGPIFGK**)Il2CppClass::FromTypeDefinitionIndex(NOBGGKJMEFG_TypeDefinitionIndex)->GetStaticField(0x46A58);
	}
	static ::System::Boolean* StaticGet_BPPCFHLNLAB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NOBGGKJMEFG_TypeDefinitionIndex)->GetStaticField(0x104E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOBGGKJMEFG__CCTOR_OFFSET))();
	}

	static ::System::Void MPGJJHIHOFL(::System::String* INHDAAAMAAL)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_MPGJJHIHOFL_OFFSET))(INHDAAAMAAL);
	}

	static ::System::Collections::Generic::List_1<::BDAGGNNDKIL*>* AACEHEJPCGI()
	{
		return ((::System::Collections::Generic::List_1<::BDAGGNNDKIL*>*(*)())((::PBYTE)hIl2Cpp + NOBGGKJMEFG_AACEHEJPCGI_OFFSET))();
	}

	static ::NILAHGKDJNN* JDFIHGKPHNN(::System::Int32 COMDNFILAIC)
	{
		return ((::NILAHGKDJNN*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_JDFIHGKPHNN_OFFSET))(COMDNFILAIC);
	}

	static ::System::Void DCCKGPDKDJC(::System::Int32 COMDNFILAIC, ::HDHDMICLMFL* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::Int32, ::HDHDMICLMFL*))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_DCCKGPDKDJC_OFFSET))(COMDNFILAIC, EJGDHCIBCJH);
	}

	static ::System::Void DCCKGPDKDJC_1(::System::String* INHDAAAMAAL, ::System::Action_1<::System::Int32>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_DCCKGPDKDJC_1_OFFSET))(INHDAAAMAAL, EJGDHCIBCJH);
	}

	static ::System::Boolean GBCGCOACOOE(::System::Int32 COMDNFILAIC)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_GBCGCOACOOE_OFFSET))(COMDNFILAIC);
	}

	static ::System::Void MPGJJHIHOFL_1(::System::Int32 COMDNFILAIC)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_MPGJJHIHOFL_1_OFFSET))(COMDNFILAIC);
	}
};
