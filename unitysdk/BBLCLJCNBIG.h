#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BBLCLJCNBIG;
class JCDNAGMDELF;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }

#define BBLCLJCNBIG_AGIBOFIBMNA_OFFSET UNITYSDK_OFFSET(0x15E83970)
#define BBLCLJCNBIG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15E83770)
#define BBLCLJCNBIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E83870)
#define BBLCLJCNBIG_DBDEKNJMPPJ_OFFSET UNITYSDK_OFFSET(0x15E83880)
#define BBLCLJCNBIG_DKMDPLNCGLE_OFFSET UNITYSDK_OFFSET(0x15E83A60)
#define BBLCLJCNBIG_GKEIFKABCNN_OFFSET UNITYSDK_OFFSET(0x15E83AA0)
#define BBLCLJCNBIG_KIEICGNJJMA_OFFSET UNITYSDK_OFFSET(0x15E83B10)

inline static constexpr unsigned int BBLCLJCNBIG_TypeDefinitionIndex = 74381;

	class BBLCLJCNBIG : public ::System::Object
	{
	public:
		::RPG::Client::TextID OBBLBEDEKLO; // 0x10
		::RPG::Client::TextID DAJPMJNJNIL; // 0x20
		::System::Boolean NIDCNJMNBIB; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 CLEDGJJDJLG; // 0x34
		::System::Void _ctor(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BBLCLJCNBIG_CTOR_OFFSET))(this, a1);
		}

		static ::BBLCLJCNBIG* BPLPBPMEODA(::RPG::GameCore::TextJoinConfigRow* a1)
		{
			return ((::BBLCLJCNBIG*(*)(::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + BBLCLJCNBIG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DBDEKNJMPPJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBLCLJCNBIG_DBDEKNJMPPJ_OFFSET))(this, a1);
		}

		::System::String* AGIBOFIBMNA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLCLJCNBIG_AGIBOFIBMNA_OFFSET))(this);
		}

		::System::Void GKEIFKABCNN(::JCDNAGMDELF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JCDNAGMDELF*, ::System::Boolean))((::PBYTE)hIl2Cpp + BBLCLJCNBIG_GKEIFKABCNN_OFFSET))(this, a1, a2);
		}

		::System::UInt32 KIEICGNJJMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLCLJCNBIG_KIEICGNJJMA_OFFSET))(this);
		}

		::System::Boolean DKMDPLNCGLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLCLJCNBIG_DKMDPLNCGLE_OFFSET))(this);
		}

	};
