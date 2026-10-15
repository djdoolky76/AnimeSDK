#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class JCDNAGMDELF;
class MHLJNIMJGKN_MIDJPFNPFPA;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHLJNIMJGKN_AGIBOFIBMNA_OFFSET UNITYSDK_OFFSET(0xB93F7F0)
#define MHLJNIMJGKN_AIFAEGHCGKG_OFFSET UNITYSDK_OFFSET(0xB93F5B0)
#define MHLJNIMJGKN_CTOR_OFFSET UNITYSDK_OFFSET(0xB93F4E0)
#define MHLJNIMJGKN_DKMDPLNCGLE_OFFSET UNITYSDK_OFFSET(0xB93FB10)
#define MHLJNIMJGKN_EMNNDIJCICJ_OFFSET UNITYSDK_OFFSET(0xB93FBC0)
#define MHLJNIMJGKN_FBBEHACMKIM_OFFSET UNITYSDK_OFFSET(0xB93FC70)
#define MHLJNIMJGKN_GKEIFKABCNN_OFFSET UNITYSDK_OFFSET(0xB93FB50)
#define MHLJNIMJGKN_MALDIKEPBIO_OFFSET UNITYSDK_OFFSET(0xB93FA20)
#define MHLJNIMJGKN__GETTEXTJOINVALUE_B__8_0_OFFSET UNITYSDK_OFFSET(0xB93FDF0)

inline static constexpr unsigned int MHLJNIMJGKN_TypeDefinitionIndex = 74386;

	class MHLJNIMJGKN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* KNIFCOKPPJK; // 0x10
		::System::Boolean NIDCNJMNBIB; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID OBBLBEDEKLO; // 0x20
		::System::UInt32 BFBKGCLCEJO; // 0x30
		::System::UInt32 EEJJBEAAGDJ; // 0x34
		::System::Void _ctor(::RPG::GameCore::TextJoinConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + MHLJNIMJGKN_CTOR_OFFSET))(this, a1);
		}

		::System::Void AIFAEGHCGKG(::RPG::GameCore::TextJoinConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + MHLJNIMJGKN_AIFAEGHCGKG_OFFSET))(this, a1);
		}

		::System::String* AGIBOFIBMNA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLJNIMJGKN_AGIBOFIBMNA_OFFSET))(this);
		}

		::System::Boolean MALDIKEPBIO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLJNIMJGKN_MALDIKEPBIO_OFFSET))(this);
		}

		::System::Void GKEIFKABCNN(::JCDNAGMDELF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JCDNAGMDELF*, ::System::Boolean))((::PBYTE)hIl2Cpp + MHLJNIMJGKN_GKEIFKABCNN_OFFSET))(this, a1, a2);
		}

		::System::UInt32 EMNNDIJCICJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLJNIMJGKN_EMNNDIJCICJ_OFFSET))(this);
		}

		::System::Boolean DKMDPLNCGLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLJNIMJGKN_DKMDPLNCGLE_OFFSET))(this);
		}

		::System::UInt32 FBBEHACMKIM(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MHLJNIMJGKN_FBBEHACMKIM_OFFSET))(this, a1);
		}

		::System::Boolean _GetTextJoinValue_b__8_0(::MHLJNIMJGKN_MIDJPFNPFPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHLJNIMJGKN_MIDJPFNPFPA*))((::PBYTE)hIl2Cpp + MHLJNIMJGKN__GETTEXTJOINVALUE_B__8_0_OFFSET))(this, a1);
		}

	};
