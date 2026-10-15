#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
class CCPEGENJFIH;
namespace RPG { class IReference; }
namespace RPG { class ReferencePool_ReferenceCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_REFERENCEPOOL_ACQUIRESTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1C3F9630)
#define RPG_REFERENCEPOOL_ACQUIRE_1_OFFSET UNITYSDK_OFFSET(0x1C3F9050)
#define RPG_REFERENCEPOOL_ADD_1_OFFSET UNITYSDK_OFFSET(0x1C3F9700)
#define RPG_REFERENCEPOOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3F9B20)
#define RPG_REFERENCEPOOL_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1C3F8ED0)
#define RPG_REFERENCEPOOL_GETREFERENCECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1C3F92D0)
#define RPG_REFERENCEPOOL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C3F8EA0)
#define RPG_REFERENCEPOOL_GET_ENABLESTRICTCHECK_OFFSET UNITYSDK_OFFSET(0x1C3F8E80)
#define RPG_REFERENCEPOOL_INTERNALCHECKREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x1C3F9080)
#define RPG_REFERENCEPOOL_RELEASEALLAUTORELEASEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C3F8860)
#define RPG_REFERENCEPOOL_RELEASE_1_OFFSET UNITYSDK_OFFSET(0x1C3F9690)
#define RPG_REFERENCEPOOL_REMOVEALL_1_OFFSET UNITYSDK_OFFSET(0x1C3F9990)
#define RPG_REFERENCEPOOL_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1C3F98A0)
#define RPG_REFERENCEPOOL_SET_ENABLESTRICTCHECK_OFFSET UNITYSDK_OFFSET(0x1C3F8E90)

namespace RPG
{
	inline static constexpr unsigned int ReferencePool_TypeDefinitionIndex = 5621;

	class ReferencePool : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet__AutoReleaseRefrenceDataList()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("RPG", "ReferencePool")->GetStaticField(0x2D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>** StaticGet_s_ReferenceCollections()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>**)UnitySDK::FromName("RPG", "ReferencePool")->GetStaticField(0x2D8);
		}

		static ::System::Boolean* StaticGet_m_EnableStrictCheck()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG", "ReferencePool")->GetStaticField(0x1F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_CCTOR_OFFSET))();
		}

		static ::System::Void ReleaseAllAutoReleaseReference()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_RELEASEALLAUTORELEASEREFERENCE_OFFSET))();
		}

		static ::System::Boolean get_EnableStrictCheck()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_GET_ENABLESTRICTCHECK_OFFSET))();
		}

		static ::System::Void set_EnableStrictCheck(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_SET_ENABLESTRICTCHECK_OFFSET))(a1);
		}

		static ::System::Int32 get_Count()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_GET_COUNT_OFFSET))();
		}

		static ::System::Void ClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_CLEARALL_OFFSET))();
		}

		static ::RPG::IReference* Acquire_1(::System::RuntimeTypeHandle a1)
		{
			return ((::RPG::IReference*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_ACQUIRE_1_OFFSET))(a1);
		}

		static ::CCPEGENJFIH* AcquireStringBuilder()
		{
			return ((::CCPEGENJFIH*(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_ACQUIRESTRINGBUILDER_OFFSET))();
		}

		static ::System::Void Release_1(::RPG::IReference* a1)
		{
			return ((::System::Void(*)(::RPG::IReference*))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_RELEASE_1_OFFSET))(a1);
		}

		static ::System::Void Add_1(::System::RuntimeTypeHandle a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_ADD_1_OFFSET))(a1, a2);
		}

		static ::System::Void Remove_1(::System::RuntimeTypeHandle a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REMOVE_1_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveAll_1(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REMOVEALL_1_OFFSET))(a1);
		}

		static ::System::Void InternalCheckReferenceType(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_INTERNALCHECKREFERENCETYPE_OFFSET))(a1);
		}

		static ::RPG::ReferencePool_ReferenceCollection* GetReferenceCollection(::System::RuntimeTypeHandle a1)
		{
			return ((::RPG::ReferencePool_ReferenceCollection*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_GETREFERENCECOLLECTION_OFFSET))(a1);
		}

	};
}
