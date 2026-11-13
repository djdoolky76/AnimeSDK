#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class DMGLFMNEJGL;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define HOGDGHNFGFP_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x1AF1F910)
#define HOGDGHNFGFP_CMEBBDJBEMO_OFFSET UNITYSDK_OFFSET(0x1AF20380)
#define HOGDGHNFGFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF20CB0)
#define HOGDGHNFGFP_GDIJGGAMELB_OFFSET UNITYSDK_OFFSET(0x1AF208B0)
#define HOGDGHNFGFP_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1AF1F8C0)

inline static constexpr unsigned int HOGDGHNFGFP_TypeDefinitionIndex = 75496;

	class HOGDGHNFGFP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* KHPDMMHNAPB; // 0x10
		::System::Text::StringBuilder* LFFDMOEAMCK; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* MBNPINGADCE; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* GJBLJIBNFHI; // 0x28
		::System::UInt32 LPNMKKIMPDI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGDGHNFGFP_CTOR_OFFSET))(this);
		}

		::System::String* JBIOGKPHKKC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGDGHNFGFP_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Object* BEJAJNEFHIB(::System::String* a1, ::DMGLFMNEJGL* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + HOGDGHNFGFP_BEJAJNEFHIB_OFFSET))(this, a1, a2);
		}

		::System::Void CMEBBDJBEMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGDGHNFGFP_CMEBBDJBEMO_OFFSET))(this);
		}

		::System::Void GDIJGGAMELB(::RPG::Client::TextID a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HOGDGHNFGFP_GDIJGGAMELB_OFFSET))(this, a1, a2, a3, a4);
		}

	};
