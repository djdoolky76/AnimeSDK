#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class DMGLFMNEJGL;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define AEBKHJNONCI_CCTOR_OFFSET UNITYSDK_OFFSET(0xB14B150)
#define AEBKHJNONCI_CTOR_OFFSET UNITYSDK_OFFSET(0xB14B140)
#define AEBKHJNONCI_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0xB14AAE0)
#define AEBKHJNONCI_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xB14AA70)

inline static constexpr unsigned int AEBKHJNONCI_TypeDefinitionIndex = 73359;

	class AEBKHJNONCI : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_LDJAFDPCODG()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("", "AEBKHJNONCI")->GetStaticField(0x4BF00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBKHJNONCI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEBKHJNONCI_CCTOR_OFFSET))();
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBKHJNONCI_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* JBGIFBGMLMF(::System::String* a1, ::IELMGLNMLFN a2, ::DMGLFMNEJGL* a3, ::AIDNGNILOAF* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::IELMGLNMLFN, ::DMGLFMNEJGL*, ::AIDNGNILOAF*))((::PBYTE)hIl2Cpp + AEBKHJNONCI_JBGIFBGMLMF_OFFSET))(this, a1, a2, a3, a4);
		}

	};
