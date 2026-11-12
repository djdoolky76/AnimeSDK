#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOLKILAIAKL;
class HJOPNDLGFBL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJOPNDLGFBL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16C87AA0)
#define HJOPNDLGFBL_CTOR_OFFSET UNITYSDK_OFFSET(0x16C87BC0)
#define HJOPNDLGFBL_GETACCUMULATEDORBCOUNT_OFFSET UNITYSDK_OFFSET(0x16C880D0)
#define HJOPNDLGFBL_GET_BLUEORBCOUNT_OFFSET UNITYSDK_OFFSET(0x16C88240)
#define HJOPNDLGFBL_GET_GOLDORBCOUNT_OFFSET UNITYSDK_OFFSET(0x16C88300)
#define HJOPNDLGFBL_GET_GRAYORBCOUNT_OFFSET UNITYSDK_OFFSET(0x16C88180)
#define HJOPNDLGFBL_GET_SETTLED_OFFSET UNITYSDK_OFFSET(0x16C88160)
#define HJOPNDLGFBL_SET_SETTLED_OFFSET UNITYSDK_OFFSET(0x16C88170)
#define HJOPNDLGFBL_UPDATE_OFFSET UNITYSDK_OFFSET(0x16C87C60)

inline static constexpr unsigned int HJOPNDLGFBL_TypeDefinitionIndex = 69651;

	class HJOPNDLGFBL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EONGILIPALO; // 0x10
		::System::Boolean _Settled_k__BackingField; // 0x18
		// static const ::System::Object KMNHOMHKMPO; // 0x0
		// static const ::System::Object ILKKPKKGGBB; // 0x0
		// static const ::System::Object IDELPBPODED; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPNDLGFBL_CTOR_OFFSET))(this);
		}

		static ::HJOPNDLGFBL* BPLPBPMEODA(::EOLKILAIAKL* a1)
		{
			return ((::HJOPNDLGFBL*(*)(::EOLKILAIAKL*))((::PBYTE)hIl2Cpp + HJOPNDLGFBL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Update(::EOLKILAIAKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOLKILAIAKL*))((::PBYTE)hIl2Cpp + HJOPNDLGFBL_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 GetAccumulatedOrbCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJOPNDLGFBL_GETACCUMULATEDORBCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_Settled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPNDLGFBL_GET_SETTLED_OFFSET))(this);
		}

		::System::Void set_Settled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HJOPNDLGFBL_SET_SETTLED_OFFSET))(this, a1);
		}

		::System::UInt32 get_GrayOrbCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPNDLGFBL_GET_GRAYORBCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_BlueOrbCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPNDLGFBL_GET_BLUEORBCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_GoldOrbCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPNDLGFBL_GET_GOLDORBCOUNT_OFFSET))(this);
		}

	};
