#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define DEKIODMEFBD_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x13E404E0)
#define DEKIODMEFBD_DCJMFMAHBLD_OFFSET UNITYSDK_OFFSET(0x13E40C40)
#define DEKIODMEFBD_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x13E40C90)
#define DEKIODMEFBD_ONDROP_OFFSET UNITYSDK_OFFSET(0x13E40B50)
#define DEKIODMEFBD_PBCMEHHLGIB_OFFSET UNITYSDK_OFFSET(0x13E406A0)
#define DEKIODMEFBD__CTOR_OFFSET UNITYSDK_OFFSET(0x13E404C0)

inline static constexpr unsigned int DEKIODMEFBD_TypeDefinitionIndex = 40402;

class DEKIODMEFBD : public ::System::Object
{
public:
	::UnityEngine::GameObject* PCHIIMFGJJM; // 0x10
	::System::Action* ONJLBPLOLGE; // 0x18
	::System::Action* OBENOHNIICB; // 0x20
	::System::Action_2<::FMHDMLBDIJC*, ::System::Int32>* KFBIFIGFGLN; // 0x28

	::System::Void _ctor(::System::Action* EPKKNJMIADC, ::System::Action* OGDNFIIBKIK, ::System::Action_2<::FMHDMLBDIJC*, ::System::Int32>* EFNGJOLKNJK, ::UnityEngine::GameObject* DHCGMOIODBJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action_2<::FMHDMLBDIJC*, ::System::Int32>*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DEKIODMEFBD__CTOR_OFFSET))(this, EPKKNJMIADC, OGDNFIIBKIK, EFNGJOLKNJK, DHCGMOIODBJ);
	}

	::System::Boolean CanAcceptDrop(::System::Object* MFHBPIBHAOB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEKIODMEFBD_CANACCEPTDROP_OFFSET))(this, MFHBPIBHAOB);
	}

	::System::Void OnDrop(::System::Object* MFHBPIBHAOB, ::UnityEngine::Transform* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DEKIODMEFBD_ONDROP_OFFSET))(this, MFHBPIBHAOB, KHGFAKJKDGG);
	}

	::System::Void DCJMFMAHBLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKIODMEFBD_DCJMFMAHBLD_OFFSET))(this);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKIODMEFBD_OIBKFFAGPNH_OFFSET))(this);
	}

	static ::System::Boolean PBCMEHHLGIB(::FMHDMLBDIJC* LGJDIKAJJNK, ::System::Int32& GMDOFLBIICM)
	{
		return ((::System::Boolean(*)(::FMHDMLBDIJC*, ::System::Int32&))((::PBYTE)hIl2Cpp + DEKIODMEFBD_PBCMEHHLGIB_OFFSET))(LGJDIKAJJNK, GMDOFLBIICM);
	}
};
