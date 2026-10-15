#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IKCABGHHMOB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLBOFKGJABG_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0xB4D9E20)
#define KLBOFKGJABG_CTOR_OFFSET UNITYSDK_OFFSET(0xB4D9C50)
#define KLBOFKGJABG_GPGKDIPNIFL_OFFSET UNITYSDK_OFFSET(0xB4D9D90)
#define KLBOFKGJABG_MGNMILDDCHB_OFFSET UNITYSDK_OFFSET(0xB4D9C90)

inline static constexpr unsigned int KLBOFKGJABG_TypeDefinitionIndex = 52106;

	class KLBOFKGJABG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IKCABGHHMOB*>* LJOOHOPBAJJ; // 0x10
		::System::UInt64 MBCACNKDMFG; // 0x18
		::System::Void _ctor(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + KLBOFKGJABG_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGNMILDDCHB(::System::UInt64 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLBOFKGJABG_MGNMILDDCHB_OFFSET))(this, a1, a2);
		}

		::System::Void GPGKDIPNIFL(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + KLBOFKGJABG_GPGKDIPNIFL_OFFSET))(this, a1);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBOFKGJABG_BPDIGKDIJKN_OFFSET))(this);
		}

	};
