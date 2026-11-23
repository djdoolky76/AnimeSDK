#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AB151CCC70805854_AE1129AD28C04725_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define AB151CCC70805854_B0E15CEB31AA9661_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define AB151CCC70805854_F556409341E46AB0_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define AB151CCC70805854_FA8DB15FAAA7F828_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define AB151CCC70805854_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24E4340)
#define AB151CCC70805854__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AB151CCC70805854_TypeDefinitionIndex = 4990;

class AB151CCC70805854 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::AD61077CFCBEFAEA>* EDA3572ED3F8A8D0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>* FF49113507849754; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AB151CCC70805854*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AB151CCC70805854*&))((::PBYTE)hIl2Cpp + AB151CCC70805854_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void F556409341E46AB0(::System::Collections::Generic::Dictionary_2<::System::String*, ::AD61077CFCBEFAEA>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::AD61077CFCBEFAEA>*))((::PBYTE)hIl2Cpp + AB151CCC70805854_F556409341E46AB0_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>* B0E15CEB31AA9661()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AB151CCC70805854_B0E15CEB31AA9661_OFFSET))(this);
	}

	::System::Void AE1129AD28C04725(::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>*))((::PBYTE)hIl2Cpp + AB151CCC70805854_AE1129AD28C04725_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB151CCC70805854__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::AD61077CFCBEFAEA>* FA8DB15FAAA7F828()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::AD61077CFCBEFAEA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AB151CCC70805854_FA8DB15FAAA7F828_OFFSET))(this);
	}
};
