#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define GCNGKDNKJML_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x13DB7390)
#define GCNGKDNKJML_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13DB7530)
#define GCNGKDNKJML__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DB72F0)

inline static constexpr unsigned int GCNGKDNKJML_TypeDefinitionIndex = 90344;

class GCNGKDNKJML : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::Stack_1<::ENGKPGFGGLM*>*>** StaticGet_LIPFGJDMGJP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::Stack_1<::ENGKPGFGGLM*>*>**)Il2CppClass::FromTypeDefinitionIndex(GCNGKDNKJML_TypeDefinitionIndex)->GetStaticField(0x51EB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCNGKDNKJML__CCTOR_OFFSET))();
	}

	static ::System::Void MBKDOMFJFIG(::ENGKPGFGGLM* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GCNGKDNKJML_MBKDOMFJFIG_OFFSET))(ECMMKCJLBMD);
	}

	static ::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCNGKDNKJML_PHOADBJGFBE_OFFSET))();
	}
};
