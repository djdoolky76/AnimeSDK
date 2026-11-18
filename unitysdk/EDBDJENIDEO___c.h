#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }

#define EDBDJENIDEO___C_ALLJLNMKBMC_OFFSET UNITYSDK_OFFSET(0x158939E0)
#define EDBDJENIDEO___C_BFPMANILDFL_OFFSET UNITYSDK_OFFSET(0x15893A40)
#define EDBDJENIDEO___C_IOGDIOPJNKL_OFFSET UNITYSDK_OFFSET(0x158938B0)
#define EDBDJENIDEO___C_MLFPJDEJGGJ_OFFSET UNITYSDK_OFFSET(0x15893920)
#define EDBDJENIDEO___C_MONAMGHMDCB_OFFSET UNITYSDK_OFFSET(0x15893B50)
#define EDBDJENIDEO___C_PHNIFOJKNAC_OFFSET UNITYSDK_OFFSET(0x158938A0)
#define EDBDJENIDEO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15893850)
#define EDBDJENIDEO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15893890)

inline static constexpr unsigned int EDBDJENIDEO___c_TypeDefinitionIndex = 90362;

class EDBDJENIDEO___c : public ::System::Object
{
public:
	static ::NapStreaming::NapStreamingManager_StreamingPosProvider** StaticGet___9__45_1()
	{
		return (::NapStreaming::NapStreamingManager_StreamingPosProvider**)Il2CppClass::FromTypeDefinitionIndex(EDBDJENIDEO___c_TypeDefinitionIndex)->GetStaticField(0x31680);
	}
	static ::System::Action** StaticGet___9__42_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EDBDJENIDEO___c_TypeDefinitionIndex)->GetStaticField(0x31688);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EDBDJENIDEO___c_TypeDefinitionIndex)->GetStaticField(0x31690);
	}
	static ::System::Action** StaticGet___9__39_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EDBDJENIDEO___c_TypeDefinitionIndex)->GetStaticField(0x31698);
	}
	static ::System::Action** StaticGet___9__34_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EDBDJENIDEO___c_TypeDefinitionIndex)->GetStaticField(0x316A0);
	}
	static ::System::Action** StaticGet___9__37_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EDBDJENIDEO___c_TypeDefinitionIndex)->GetStaticField(0x316A8);
	}
	static ::System::Action** StaticGet___9__39_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EDBDJENIDEO___c_TypeDefinitionIndex)->GetStaticField(0x316B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDBDJENIDEO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO___C__CTOR_OFFSET))(this);
	}

	::System::Void PHNIFOJKNAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO___C_PHNIFOJKNAC_OFFSET))(this);
	}

	::System::Void IOGDIOPJNKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO___C_IOGDIOPJNKL_OFFSET))(this);
	}

	::System::Void MLFPJDEJGGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO___C_MLFPJDEJGGJ_OFFSET))(this);
	}

	::System::Void ALLJLNMKBMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO___C_ALLJLNMKBMC_OFFSET))(this);
	}

	::System::Void BFPMANILDFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO___C_BFPMANILDFL_OFFSET))(this);
	}

	::UnityEngine::Vector3 MONAMGHMDCB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO___C_MONAMGHMDCB_OFFSET))(this);
	}
};
