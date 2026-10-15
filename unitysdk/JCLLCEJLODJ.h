#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DelayNotifyTiming.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
class JPHLJKCLBIJ;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define JCLLCEJLODJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x165A6E20)
#define JCLLCEJLODJ_DJGOFKCPNGH_OFFSET UNITYSDK_OFFSET(0x165A6CB0)
#define JCLLCEJLODJ_FPDKCDDLHEF_OFFSET UNITYSDK_OFFSET(0x165A6DB0)
#define JCLLCEJLODJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x165A6A60)
#define JCLLCEJLODJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x165A6940)
#define JCLLCEJLODJ_LDHAAHGMOKF_OFFSET UNITYSDK_OFFSET(0x165A6D20)
#define JCLLCEJLODJ_LHOPBHMPAPE_OFFSET UNITYSDK_OFFSET(0x165A6B80)

inline static constexpr unsigned int JCLLCEJLODJ_TypeDefinitionIndex = 62198;

	class JCLLCEJLODJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Queue_1<::JPHLJKCLBIJ*>** StaticGet_HBBFNNKHKBE()
		{
			return (::System::Collections::Generic::Queue_1<::JPHLJKCLBIJ*>**)UnitySDK::FromName("", "JCLLCEJLODJ")->GetStaticField(0x6EEB0);
		}

		static ::System::Collections::Generic::Queue_1<::JPHLJKCLBIJ*>** StaticGet_ILDGNOBOEOA()
		{
			return (::System::Collections::Generic::Queue_1<::JPHLJKCLBIJ*>**)UnitySDK::FromName("", "JCLLCEJLODJ")->GetStaticField(0x6EEB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCLLCEJLODJ_CCTOR_OFFSET))();
		}

		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCLLCEJLODJ_KPJGDHLENIP_OFFSET))();
		}

		static ::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCLLCEJLODJ_HADOHLNHHGB_OFFSET))();
		}

		static ::System::Void LHOPBHMPAPE(::RPG::Client::DelayNotifyTiming a1, ::RPG::Client::NotifyType a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::RPG::Client::DelayNotifyTiming, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + JCLLCEJLODJ_LHOPBHMPAPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DJGOFKCPNGH(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + JCLLCEJLODJ_DJGOFKCPNGH_OFFSET))(a1);
		}

		static ::System::Void FPDKCDDLHEF(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + JCLLCEJLODJ_FPDKCDDLHEF_OFFSET))(a1);
		}

		static ::System::Void LDHAAHGMOKF(::System::Collections::Generic::Queue_1<::JPHLJKCLBIJ*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Queue_1<::JPHLJKCLBIJ*>*))((::PBYTE)hIl2Cpp + JCLLCEJLODJ_LDHAAHGMOKF_OFFSET))(a1);
		}

	};
