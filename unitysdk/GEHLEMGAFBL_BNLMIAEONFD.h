#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class GEHLEMGAFBL_BNLMIAEONFD;
namespace RPG::GameCore { class TextJoinConditionalItemRow; }
namespace System { class String; }

#define GEHLEMGAFBL_BNLMIAEONFD_AGIBOFIBMNA_OFFSET UNITYSDK_OFFSET(0x159CC0D0)
#define GEHLEMGAFBL_BNLMIAEONFD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x159CBD00)
#define GEHLEMGAFBL_BNLMIAEONFD_CTOR_OFFSET UNITYSDK_OFFSET(0x159CC150)
#define GEHLEMGAFBL_BNLMIAEONFD_MNBBCAMDGDI_OFFSET UNITYSDK_OFFSET(0x159CC040)

inline static constexpr unsigned int GEHLEMGAFBL_BNLMIAEONFD_TypeDefinitionIndex = 74383;

	class GEHLEMGAFBL_BNLMIAEONFD : public ::System::Object
	{
	public:
		::RPG::Client::TextID GEPFFDDHPAI; // 0x10
		::System::UInt32 IPONDHMHDBI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TextJoinConditionalItemRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConditionalItemRow*))((::PBYTE)hIl2Cpp + GEHLEMGAFBL_BNLMIAEONFD_CTOR_OFFSET))(this, a1);
		}

		static ::GEHLEMGAFBL_BNLMIAEONFD* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::GEHLEMGAFBL_BNLMIAEONFD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GEHLEMGAFBL_BNLMIAEONFD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::String* AGIBOFIBMNA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLEMGAFBL_BNLMIAEONFD_AGIBOFIBMNA_OFFSET))(this);
		}

		::System::Boolean MNBBCAMDGDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLEMGAFBL_BNLMIAEONFD_MNBBCAMDGDI_OFFSET))(this);
		}

	};
