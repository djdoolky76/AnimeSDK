#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterMappingConfig; }
namespace MoleMole { class MonsterMappingEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FDJHAKJKKJE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x11ACAE60)
#define FDJHAKJKKJE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x11ACB090)
#define FDJHAKJKKJE_GBDNLMFAOLB_OFFSET UNITYSDK_OFFSET(0x11ACAAE0)

inline static constexpr unsigned int FDJHAKJKKJE_TypeDefinitionIndex = 44656;

class FDJHAKJKKJE : public ::System::Object
{
public:
	static ::MoleMole::MonsterMappingConfig** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::MonsterMappingConfig**)Il2CppClass::FromTypeDefinitionIndex(FDJHAKJKKJE_TypeDefinitionIndex)->GetStaticField(0x513C0);
	}

	static ::System::Boolean GBDNLMFAOLB(::System::Int32 GIAOKGFENJD, ::System::Int32 KMFOONLDBFA, ::MoleMole::MonsterMappingEntry*& AAIJGGIEOGK)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::MoleMole::MonsterMappingEntry*&))((::PBYTE)hIl2Cpp + FDJHAKJKKJE_GBDNLMFAOLB_OFFSET))(GIAOKGFENJD, KMFOONLDBFA, AAIJGGIEOGK);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FDJHAKJKKJE_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single OGKEBCPEPED, ::System::Action_1<::System::Single>* HAAJELGELCC, ::System::Action_1<::System::String*>* NPFIONPDFED, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + FDJHAKJKKJE_DGMLFELCAIO_OFFSET))(OGKEBCPEPED, HAAJELGELCC, NPFIONPDFED, HIAIKHDFCLN);
	}
};
