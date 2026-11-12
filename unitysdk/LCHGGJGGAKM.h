#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCHGGJGGAKM;
namespace RPG::Client { class NotifyHandler; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCHGGJGGAKM_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEA7CA0)
#define LCHGGJGGAKM_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA7C20)
#define LCHGGJGGAKM_ENDDOOAMEFP_OFFSET UNITYSDK_OFFSET(0xBEA7AF0)
#define LCHGGJGGAKM_OHLBBCBKLHN_OFFSET UNITYSDK_OFFSET(0xBEA7900)
#define LCHGGJGGAKM_OOLBMLIDOOJ_OFFSET UNITYSDK_OFFSET(0xBEA79D0)

inline static constexpr unsigned int LCHGGJGGAKM_TypeDefinitionIndex = 67608;

	class LCHGGJGGAKM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Action*, ::RPG::Client::NotifyHandler*>* GNIDKBCKFMD; // 0x10
		static ::LCHGGJGGAKM** StaticGet_FMJPMFEDIJL()
		{
			return (::LCHGGJGGAKM**)UnitySDK::FromName("", "LCHGGJGGAKM")->GetStaticField(0x1B1D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHGGJGGAKM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCHGGJGGAKM_CCTOR_OFFSET))();
		}

		::System::UInt32 OHLBBCBKLHN(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCHGGJGGAKM_OHLBBCBKLHN_OFFSET))(this, a1);
		}

		::System::Void OOLBMLIDOOJ(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LCHGGJGGAKM_OOLBMLIDOOJ_OFFSET))(this, a1);
		}

		::System::Void ENDDOOAMEFP(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LCHGGJGGAKM_ENDDOOAMEFP_OFFSET))(this, a1);
		}

	};
