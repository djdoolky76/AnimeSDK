#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class Object; }
namespace System { class String; }

#define ECNDAMAIADN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1548FCE0)
#define ECNDAMAIADN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1548FC50)
#define ECNDAMAIADN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1548FBC0)
#define ECNDAMAIADN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1548FB40)
#define ECNDAMAIADN__CTOR_OFFSET UNITYSDK_OFFSET(0x1548FBB0)

inline static constexpr unsigned int ECNDAMAIADN_TypeDefinitionIndex = 58148;

class ECNDAMAIADN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::String* MDJALIKJKPF; // 0x0
	// static const ::System::String* PHFPDEBGJCA; // 0x0
	// static const ::System::String* KPOGFKNDNOB; // 0x0
	// static const ::System::String* HCFMKGOMOFJ; // 0x0
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x136; // 0x0
	::Il2CppArray<::System::Object*>* AHECJBACEDB; // 0x20
	::System::String* AECFCANHLBF; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECNDAMAIADN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNDAMAIADN__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNDAMAIADN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNDAMAIADN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::String* MCOHLHMKLIP, ::Il2CppArray<::System::Object*>* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ECNDAMAIADN_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, MCOHLHMKLIP, HNOPAJLDCFB);
	}
};
