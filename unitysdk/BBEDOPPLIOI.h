#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDBCIPCDIPC;
namespace Entitas { template <typename T> class IAllOfMatcher_1; }
namespace Entitas { template <typename T> class IAnyOfMatcher_1; }
namespace Entitas { template <typename T> class IMatcher_1; }

#define BBEDOPPLIOI_CKCLHJNCCLE_1_OFFSET UNITYSDK_OFFSET(0x1C882B50)
#define BBEDOPPLIOI_CKCLHJNCCLE_OFFSET UNITYSDK_OFFSET(0x1C882AC0)
#define BBEDOPPLIOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C882BE0)
#define BBEDOPPLIOI_ECEPLAFOEPH_OFFSET UNITYSDK_OFFSET(0x1C882880)
#define BBEDOPPLIOI_FKLBPPAEHKP_OFFSET UNITYSDK_OFFSET(0x1C882820)
#define BBEDOPPLIOI_KCKGCBPHGBD_1_OFFSET UNITYSDK_OFFSET(0x1C882A30)
#define BBEDOPPLIOI_KCKGCBPHGBD_OFFSET UNITYSDK_OFFSET(0x1C8829A0)

inline static constexpr unsigned int BBEDOPPLIOI_TypeDefinitionIndex = 42639;

	class BBEDOPPLIOI : public ::System::Object
	{
	public:
		static ::Entitas::IMatcher_1<::PDBCIPCDIPC*>** StaticGet_HDGBJGJDLKL()
		{
			return (::Entitas::IMatcher_1<::PDBCIPCDIPC*>**)UnitySDK::FromName("", "BBEDOPPLIOI")->GetStaticField(0x2C430);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEDOPPLIOI_CTOR_OFFSET))(this);
		}

		static ::Entitas::IMatcher_1<::PDBCIPCDIPC*>* FKLBPPAEHKP()
		{
			return ((::Entitas::IMatcher_1<::PDBCIPCDIPC*>*(*)())((::PBYTE)hIl2Cpp + BBEDOPPLIOI_FKLBPPAEHKP_OFFSET))();
		}

		static ::Entitas::IMatcher_1<::PDBCIPCDIPC*>* ECEPLAFOEPH()
		{
			return ((::Entitas::IMatcher_1<::PDBCIPCDIPC*>*(*)())((::PBYTE)hIl2Cpp + BBEDOPPLIOI_ECEPLAFOEPH_OFFSET))();
		}

		static ::Entitas::IAllOfMatcher_1<::PDBCIPCDIPC*>* KCKGCBPHGBD(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::Entitas::IAllOfMatcher_1<::PDBCIPCDIPC*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + BBEDOPPLIOI_KCKGCBPHGBD_OFFSET))(a1);
		}

		static ::Entitas::IAllOfMatcher_1<::PDBCIPCDIPC*>* KCKGCBPHGBD_1(::Il2CppArray<::Entitas::IMatcher_1<::PDBCIPCDIPC*>*>* a1)
		{
			return ((::Entitas::IAllOfMatcher_1<::PDBCIPCDIPC*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::PDBCIPCDIPC*>*>*))((::PBYTE)hIl2Cpp + BBEDOPPLIOI_KCKGCBPHGBD_1_OFFSET))(a1);
		}

		static ::Entitas::IAnyOfMatcher_1<::PDBCIPCDIPC*>* CKCLHJNCCLE(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::Entitas::IAnyOfMatcher_1<::PDBCIPCDIPC*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + BBEDOPPLIOI_CKCLHJNCCLE_OFFSET))(a1);
		}

		static ::Entitas::IAnyOfMatcher_1<::PDBCIPCDIPC*>* CKCLHJNCCLE_1(::Il2CppArray<::Entitas::IMatcher_1<::PDBCIPCDIPC*>*>* a1)
		{
			return ((::Entitas::IAnyOfMatcher_1<::PDBCIPCDIPC*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::PDBCIPCDIPC*>*>*))((::PBYTE)hIl2Cpp + BBEDOPPLIOI_CKCLHJNCCLE_1_OFFSET))(a1);
		}

	};
