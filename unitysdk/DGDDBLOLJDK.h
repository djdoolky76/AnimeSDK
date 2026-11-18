#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIEEJFNFCDK.h"
#include "unitysdk/PJBGHMDHHBM.h"

class GCHNEBDJNPF;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGDDBLOLJDK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D692F50)
#define DGDDBLOLJDK_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D693820)
#define DGDDBLOLJDK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D693090)
#define DGDDBLOLJDK_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D693600)
#define DGDDBLOLJDK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D693550)
#define DGDDBLOLJDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D692F90)

inline static constexpr unsigned int DGDDBLOLJDK_TypeDefinitionIndex = 94169;

class DGDDBLOLJDK : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::GCHNEBDJNPF*>*>* NLDIGKEIHAO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GCHNEBDJNPF*>* JMINOGAOFIL; // 0x20
	::FIEEJFNFCDK DHDJDGFNBOA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDDBLOLJDK__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDDBLOLJDK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGDDBLOLJDK_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDDBLOLJDK_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDDBLOLJDK_PHOADBJGFBE_OFFSET))(this);
	}

	::GCHNEBDJNPF* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::GCHNEBDJNPF*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DGDDBLOLJDK_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
