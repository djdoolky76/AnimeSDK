#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/IRIClusterVolumeInfo.h"
#include "unitysdk/UnityEngine/Vector4.h"
class HBFIBDGJLHE_DOILBHIAKJN;
class HBFIBDGJLHE_DOILBHIAKJN_JMEAELKHBGH;
class HBFIBDGJLHE_FKNIOEHAGAL;
class HBFIBDGJLHE_GIFMIOMFGNE;
namespace IRIClusterBuilder { class IRI2Type; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBFIBDGJLHE_DOILBHIAKJN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15BEF370)
#define HBFIBDGJLHE_DOILBHIAKJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x15BF0750)
#define HBFIBDGJLHE_DOILBHIAKJN_CTOR_OFFSET UNITYSDK_OFFSET(0x15BEF5E0)
#define HBFIBDGJLHE_DOILBHIAKJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BEFAF0)
#define HBFIBDGJLHE_DOILBHIAKJN_EINIOPLFCLN_OFFSET UNITYSDK_OFFSET(0x15BF0160)
#define HBFIBDGJLHE_DOILBHIAKJN_FPFLMADOKJN_OFFSET UNITYSDK_OFFSET(0x15BEFE00)
#define HBFIBDGJLHE_DOILBHIAKJN_GET_CAR_OFFSET UNITYSDK_OFFSET(0x15BF0730)
#define HBFIBDGJLHE_DOILBHIAKJN_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x15BF0710)
#define HBFIBDGJLHE_DOILBHIAKJN_GPBIACDBPNB_OFFSET UNITYSDK_OFFSET(0x15BF0460)
#define HBFIBDGJLHE_DOILBHIAKJN_JGNLGCHEBIP_OFFSET UNITYSDK_OFFSET(0x15BEFC30)
#define HBFIBDGJLHE_DOILBHIAKJN_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0x15BF0690)
#define HBFIBDGJLHE_DOILBHIAKJN_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15BEFCC0)
#define HBFIBDGJLHE_DOILBHIAKJN_SET_CAR_OFFSET UNITYSDK_OFFSET(0x15BF0740)
#define HBFIBDGJLHE_DOILBHIAKJN_SET_MANAGER_OFFSET UNITYSDK_OFFSET(0x15BF0720)

inline static constexpr unsigned int HBFIBDGJLHE_DOILBHIAKJN_TypeDefinitionIndex = 82175;

	class HBFIBDGJLHE_DOILBHIAKJN : public ::System::Object
	{
	public:
		::HBFIBDGJLHE_FKNIOEHAGAL* _Manager_k__BackingField; // 0x10
		::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* AMGNNHMGLLB; // 0x18
		::HBFIBDGJLHE_GIFMIOMFGNE* _Car_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* IDLOFOBONCN; // 0x28
		::System::UInt64 ALJBKHKHDIF; // 0x30
		::System::Boolean FJMFKJEIOIO; // 0x38
		::System::Byte _padding0[0x7];
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> CFKDNCJGPEA; // 0x40
		static ::System::Collections::Generic::List_1<::IRIClusterBuilder::IRI2Type*>** StaticGet_HKODCLPAPOG()
		{
			return (::System::Collections::Generic::List_1<::IRIClusterBuilder::IRI2Type*>**)UnitySDK::FromName("", "DOILBHIAKJN")->GetStaticField(0x6F650);
		}

		// static const ::System::Object MECEBHHONHM; // 0x0
		::System::Void _ctor(::HBFIBDGJLHE_FKNIOEHAGAL* a1, ::HBFIBDGJLHE_GIFMIOMFGNE* a2, ::UnityEngine::IRIClusterVolumeInfo a3)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_FKNIOEHAGAL*, ::HBFIBDGJLHE_GIFMIOMFGNE*, ::UnityEngine::IRIClusterVolumeInfo))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_CCTOR_OFFSET))();
		}

		static ::HBFIBDGJLHE_DOILBHIAKJN* BPLPBPMEODA(::HBFIBDGJLHE_FKNIOEHAGAL* a1, ::HBFIBDGJLHE_GIFMIOMFGNE* a2)
		{
			return ((::HBFIBDGJLHE_DOILBHIAKJN*(*)(::HBFIBDGJLHE_FKNIOEHAGAL*, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_DISPOSE_OFFSET))(this);
		}

		::System::Void JGNLGCHEBIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_JGNLGCHEBIP_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_PAGKOAEOLKA_OFFSET))(this);
		}

		::UnityEngine::Vector4 FPFLMADOKJN(::HBFIBDGJLHE_DOILBHIAKJN_JMEAELKHBGH* a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::HBFIBDGJLHE_DOILBHIAKJN_JMEAELKHBGH*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_FPFLMADOKJN_OFFSET))(this, a1);
		}

		::System::Void EINIOPLFCLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_EINIOPLFCLN_OFFSET))(this);
		}

		::System::Void GPBIACDBPNB(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_GPBIACDBPNB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_KHNCMBEFIKI_OFFSET))(this);
		}

		::HBFIBDGJLHE_FKNIOEHAGAL* get_Manager()
		{
			return ((::HBFIBDGJLHE_FKNIOEHAGAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_GET_MANAGER_OFFSET))(this);
		}

		::System::Void set_Manager(::HBFIBDGJLHE_FKNIOEHAGAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_FKNIOEHAGAL*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_SET_MANAGER_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_GIFMIOMFGNE* get_Car()
		{
			return ((::HBFIBDGJLHE_GIFMIOMFGNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_GET_CAR_OFFSET))(this);
		}

		::System::Void set_Car(::HBFIBDGJLHE_GIFMIOMFGNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DOILBHIAKJN_SET_CAR_OFFSET))(this, a1);
		}

	};
