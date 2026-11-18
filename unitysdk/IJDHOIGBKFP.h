#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMLJMPPLOII.h"
#include "unitysdk/PJBGHMDHHBM.h"

class HHKGFOGCEFK;
class MDAEJNMJJNA;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJDHOIGBKFP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D6A0D50)
#define IJDHOIGBKFP_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D6A1260)
#define IJDHOIGBKFP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D6A0F60)
#define IJDHOIGBKFP_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D6A1440)
#define IJDHOIGBKFP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D6A0E70)
#define IJDHOIGBKFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A0D90)

inline static constexpr unsigned int IJDHOIGBKFP_TypeDefinitionIndex = 93964;

class IJDHOIGBKFP : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HHKGFOGCEFK*>* JMINOGAOFIL; // 0x18
	::System::Collections::Generic::List_1<::MDAEJNMJJNA*>* MPKLADBLKCN; // 0x20
	::MMLJMPPLOII DHDJDGFNBOA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDHOIGBKFP__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDHOIGBKFP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDHOIGBKFP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJDHOIGBKFP_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::HHKGFOGCEFK* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::HHKGFOGCEFK*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IJDHOIGBKFP_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDHOIGBKFP_MDGCOKBMLFG_OFFSET))(this);
	}
};
