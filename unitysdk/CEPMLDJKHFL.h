#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNEDFJMPCCK.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/IRIClusterVolumeInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
class CEPMLDJKHFL_EMJPKGGFBIH;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGInstancedItemClusterVolumeManager; }
namespace UnityEngine { class Transform; }

#define CEPMLDJKHFL_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xC9F9730)
#define CEPMLDJKHFL_CTOR_OFFSET UNITYSDK_OFFSET(0xC9F8890)
#define CEPMLDJKHFL_DAHANCBCKOH_OFFSET UNITYSDK_OFFSET(0xC9F8D20)
#define CEPMLDJKHFL_EINIOPLFCLN_OFFSET UNITYSDK_OFFSET(0xC9F94D0)
#define CEPMLDJKHFL_FPFLMADOKJN_OFFSET UNITYSDK_OFFSET(0xC9F9170)
#define CEPMLDJKHFL_GPBIACDBPNB_OFFSET UNITYSDK_OFFSET(0xC9F97E0)
#define CEPMLDJKHFL_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xC9F9980)
#define CEPMLDJKHFL_LMJCDMPNBKE_OFFSET UNITYSDK_OFFSET(0xC9F9040)
#define CEPMLDJKHFL_ONHNNLDMAII_OFFSET UNITYSDK_OFFSET(0xC9F8EE0)

	class CEPMLDJKHFL : public ::NNEDFJMPCCK
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* CMNLKKBBIMO; // 0x30
		::UnityEngine::RPGInstancedItemClusterVolumeManager* BDBLGJGGNDH; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* EEFNDEPABJC; // 0x40
		::UnityEngine::GameObject* CDBMKOJNEHB; // 0x48
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> GDFDJKEDLJO; // 0x50
		::System::Byte _padding0[0x8];
		::System::Boolean OJJHEHBPJBC; // 0x60
		::System::Byte _padding1[0x7];
		::System::UInt64 HAKOPJDCGBA; // 0x68
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::IRIClusterVolumeInfo a3, ::UnityEngine::RPGInstancedItemClusterVolumeManager* a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::UnityEngine::IRIClusterVolumeInfo, ::UnityEngine::RPGInstancedItemClusterVolumeManager*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CEPMLDJKHFL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LMJCDMPNBKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPMLDJKHFL_LMJCDMPNBKE_OFFSET))(this);
		}

		::System::Void ONHNNLDMAII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPMLDJKHFL_ONHNNLDMAII_OFFSET))(this);
		}

		::UnityEngine::Vector4 FPFLMADOKJN(::CEPMLDJKHFL_EMJPKGGFBIH* a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::CEPMLDJKHFL_EMJPKGGFBIH*))((::PBYTE)hIl2Cpp + CEPMLDJKHFL_FPFLMADOKJN_OFFSET))(this, a1);
		}

		::System::Void EINIOPLFCLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPMLDJKHFL_EINIOPLFCLN_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPMLDJKHFL_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void DAHANCBCKOH(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CEPMLDJKHFL_DAHANCBCKOH_OFFSET))(this, a1);
		}

		::System::Void GPBIACDBPNB(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CEPMLDJKHFL_GPBIACDBPNB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPMLDJKHFL_KHNCMBEFIKI_OFFSET))(this);
		}

	};
