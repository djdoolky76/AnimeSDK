#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"
class BENFAMJGAJP;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { template <typename T1, typename T2> class IndexedDictionary_2; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PJHGKCEAIBC_CCTOR_OFFSET UNITYSDK_OFFSET(0xC281A50)
#define PJHGKCEAIBC_CTOR_OFFSET UNITYSDK_OFFSET(0xC280270)
#define PJHGKCEAIBC_EFJFHCKOJNK_OFFSET UNITYSDK_OFFSET(0xC2814F0)
#define PJHGKCEAIBC_IABLGLLEKNC_OFFSET UNITYSDK_OFFSET(0xC281810)
#define PJHGKCEAIBC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC2802C0)
#define PJHGKCEAIBC_MPCDMJMMKAF_OFFSET UNITYSDK_OFFSET(0xC280CB0)
#define PJHGKCEAIBC_NKNPEHJFHEG_1_OFFSET UNITYSDK_OFFSET(0xC280AF0)
#define PJHGKCEAIBC_NKNPEHJFHEG_OFFSET UNITYSDK_OFFSET(0xC280660)
#define PJHGKCEAIBC_OAMGIHIFJJJ_OFFSET UNITYSDK_OFFSET(0xC281580)
#define PJHGKCEAIBC_OBBJLBIDCLH_OFFSET UNITYSDK_OFFSET(0xC281320)
#define PJHGKCEAIBC_OHCGEHDBEJE_OFFSET UNITYSDK_OFFSET(0xC280E20)
#define PJHGKCEAIBC_PONPGGIHLNO_OFFSET UNITYSDK_OFFSET(0xC280D70)

inline static constexpr unsigned int PJHGKCEAIBC_TypeDefinitionIndex = 59762;

	class PJHGKCEAIBC : public ::System::Object
	{
	public:
		::RPG::Client::IndexedDictionary_2<::System::UInt32, ::BENFAMJGAJP*>* MCCNAFIBBNF; // 0x10
		::Collections::Pooled::PooledList_1<::System::UInt32>* FLAELIKONOC; // 0x18
		static ::RPG::Client::RPGProfilerMarker** StaticGet_OEJLMMLOODK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "PJHGKCEAIBC")->GetStaticField(0x6FD80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHGKCEAIBC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJHGKCEAIBC_CCTOR_OFFSET))();
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJHGKCEAIBC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void NKNPEHJFHEG(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PJHGKCEAIBC_NKNPEHJFHEG_OFFSET))(this, a1, a2);
		}

		::System::Void NKNPEHJFHEG_1(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PJHGKCEAIBC_NKNPEHJFHEG_1_OFFSET))(this, a1, a2);
		}

		::System::Void MPCDMJMMKAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJHGKCEAIBC_MPCDMJMMKAF_OFFSET))(this, a1);
		}

		::System::Void PONPGGIHLNO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJHGKCEAIBC_PONPGGIHLNO_OFFSET))(this, a1);
		}

		::System::Void OHCGEHDBEJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHGKCEAIBC_OHCGEHDBEJE_OFFSET))(this);
		}

		::System::Void OBBJLBIDCLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHGKCEAIBC_OBBJLBIDCLH_OFFSET))(this);
		}

		::System::Boolean EFJFHCKOJNK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJHGKCEAIBC_EFJFHCKOJNK_OFFSET))(this, a1);
		}

		::System::Void OAMGIHIFJJJ(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + PJHGKCEAIBC_OAMGIHIFJJJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IABLGLLEKNC(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + PJHGKCEAIBC_IABLGLLEKNC_OFFSET))(this, a1, a2, a3, a4);
		}

	};
