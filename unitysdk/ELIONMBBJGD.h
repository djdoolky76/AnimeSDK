#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHOFLJKBALH;
class BNNGDLLACML;
class EJAMGMFMBLL;
class KDANACKPJIP;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define ELIONMBBJGD_BFHOACEIHFK_OFFSET UNITYSDK_OFFSET(0x155187E0)
#define ELIONMBBJGD_BPIKEHCGLKD_OFFSET UNITYSDK_OFFSET(0x155186B0)
#define ELIONMBBJGD_CTOR_OFFSET UNITYSDK_OFFSET(0x15517420)
#define ELIONMBBJGD_HKELCJPCIHJ_OFFSET UNITYSDK_OFFSET(0x15517510)
#define ELIONMBBJGD_JHEFDPMJHLF_OFFSET UNITYSDK_OFFSET(0x15519080)
#define ELIONMBBJGD_JILNIMNBDCC_OFFSET UNITYSDK_OFFSET(0x15518540)
#define ELIONMBBJGD_JNBDAHGIPKB_OFFSET UNITYSDK_OFFSET(0x15518070)
#define ELIONMBBJGD_KAMKMIPKEDH_OFFSET UNITYSDK_OFFSET(0x15517720)
#define ELIONMBBJGD_KCNMJFALNDA_OFFSET UNITYSDK_OFFSET(0x15518F20)
#define ELIONMBBJGD_KNNKKGFAIHG_OFFSET UNITYSDK_OFFSET(0x155190C0)
#define ELIONMBBJGD_NCDKIPILDPD_OFFSET UNITYSDK_OFFSET(0x15518DF0)

inline static constexpr unsigned int ELIONMBBJGD_TypeDefinitionIndex = 81021;

	class ELIONMBBJGD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BNNGDLLACML*>* DLFPKICOJDB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EJAMGMFMBLL*>* JMFEAGMLOEA; // 0x18
		::BHOFLJKBALH* HIKMCIFIFAA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIONMBBJGD_CTOR_OFFSET))(this);
		}

		::System::Void JNBDAHGIPKB(::Google::Protobuf::Collections::RepeatedField_1<::KDANACKPJIP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::KDANACKPJIP*>*))((::PBYTE)hIl2Cpp + ELIONMBBJGD_JNBDAHGIPKB_OFFSET))(this, a1);
		}

		::System::Void JILNIMNBDCC(::KDANACKPJIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDANACKPJIP*))((::PBYTE)hIl2Cpp + ELIONMBBJGD_JILNIMNBDCC_OFFSET))(this, a1);
		}

		::System::Void BPIKEHCGLKD(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3, ::KDANACKPJIP* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::KDANACKPJIP*))((::PBYTE)hIl2Cpp + ELIONMBBJGD_BPIKEHCGLKD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::BNNGDLLACML*>* BFHOACEIHFK()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::BNNGDLLACML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIONMBBJGD_BFHOACEIHFK_OFFSET))(this);
		}

		::BNNGDLLACML* NCDKIPILDPD(::System::UInt32 a1)
		{
			return ((::BNNGDLLACML*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELIONMBBJGD_NCDKIPILDPD_OFFSET))(this, a1);
		}

		::BNNGDLLACML* KCNMJFALNDA(::System::UInt32 a1)
		{
			return ((::BNNGDLLACML*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELIONMBBJGD_KCNMJFALNDA_OFFSET))(this, a1);
		}

		::BHOFLJKBALH* JHEFDPMJHLF()
		{
			return ((::BHOFLJKBALH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIONMBBJGD_JHEFDPMJHLF_OFFSET))(this);
		}

		::System::Void KNNKKGFAIHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIONMBBJGD_KNNKKGFAIHG_OFFSET))(this);
		}

		::System::Void HKELCJPCIHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIONMBBJGD_HKELCJPCIHJ_OFFSET))(this);
		}

		::System::Void KAMKMIPKEDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIONMBBJGD_KAMKMIPKEDH_OFFSET))(this);
		}

	};
