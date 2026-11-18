#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEIHCPAOKKK;
class NCPPHHEDIIN;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MLFMGIIOBEI___C_DHIPFOHDMOE_OFFSET UNITYSDK_OFFSET(0x1A699B20)
#define MLFMGIIOBEI___C_FDGKMJIJKJJ_OFFSET UNITYSDK_OFFSET(0x1A699950)
#define MLFMGIIOBEI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A699900)
#define MLFMGIIOBEI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A699940)

inline static constexpr unsigned int MLFMGIIOBEI___c_TypeDefinitionIndex = 60243;

class MLFMGIIOBEI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MLFMGIIOBEI___c_TypeDefinitionIndex)->GetStaticField(0x50B10);
	}
	static ::System::Action_1<::NCPPHHEDIIN*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::NCPPHHEDIIN*>**)Il2CppClass::FromTypeDefinitionIndex(MLFMGIIOBEI___c_TypeDefinitionIndex)->GetStaticField(0x50B18);
	}
	static ::System::Action_2<::NCPPHHEDIIN*, ::GEIHCPAOKKK*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::NCPPHHEDIIN*, ::GEIHCPAOKKK*>**)Il2CppClass::FromTypeDefinitionIndex(MLFMGIIOBEI___c_TypeDefinitionIndex)->GetStaticField(0x50B20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLFMGIIOBEI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFMGIIOBEI___C__CTOR_OFFSET))(this);
	}

	::System::Void FDGKMJIJKJJ(::NCPPHHEDIIN* NLEPDCLCNBP)
	{
		return ((::System::Void(*)(::PVOID, ::NCPPHHEDIIN*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI___C_FDGKMJIJKJJ_OFFSET))(this, NLEPDCLCNBP);
	}

	::System::Void DHIPFOHDMOE(::NCPPHHEDIIN* HMOJPGAALFA, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::NCPPHHEDIIN*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI___C_DHIPFOHDMOE_OFFSET))(this, HMOJPGAALFA, OHPJHPEOFLD);
	}
};
