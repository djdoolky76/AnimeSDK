#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADDB992B945EF445.h"
#include "unitysdk/E68AA4EB51923C98/E6B2F091F33CDA1C.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
class B2184A192E923EAB;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define F34A89061878DED2_B110AD0F596F3A97_OFFSET UNITYSDK_OFFSET(0x241BC30)
#define F34A89061878DED2_BCA9458ACAF99495_OFFSET UNITYSDK_OFFSET(0x241BB90)
#define F34A89061878DED2_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x241BAA0)
#define F34A89061878DED2__CTOR_OFFSET UNITYSDK_OFFSET(0x241BD20)

inline static constexpr unsigned int F34A89061878DED2_TypeDefinitionIndex = 4188;

class F34A89061878DED2 : public ::ADDB992B945EF445
{
public:
	::UnityEngine::Transform* B8E0A650E4BCFEB7; // 0x18
	::UnityEngine::Transform* E352B80739E04EA1; // 0x20
	::E68AA4EB51923C98::E6B2F091F33CDA1C ACADF3EB5F3F4D04; // 0x28
	::UnityEngine::Vector3 AB5ECF6E51C055B6; // 0x2C
	::UnityEngine::Quaternion EA55BFA0678C5D35; // 0x38

	::UnityEngine::Transform* BCA9458ACAF99495(::UnityEngine::Vector3& A0C1F1E95D5F6CA9, ::UnityEngine::Quaternion& A0556B8B541B6D55)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + F34A89061878DED2_BCA9458ACAF99495_OFFSET))(this, A0C1F1E95D5F6CA9, A0556B8B541B6D55);
	}

	::System::Boolean B110AD0F596F3A97(::UnityEngine::Vector3& EAA16853DB5FF3CD)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + F34A89061878DED2_B110AD0F596F3A97_OFFSET))(this, EAA16853DB5FF3CD);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F34A89061878DED2_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void _ctor(::B2184A192E923EAB* ACDE58E97E37D13C, ::AB642D1382756991* EEF688477002B28B, ::System::String* BD6DE5F0F0DD2B71)
	{
		return ((::System::Void(*)(::PVOID, ::B2184A192E923EAB*, ::AB642D1382756991*, ::System::String*))((::PBYTE)hIl2Cpp + F34A89061878DED2__CTOR_OFFSET))(this, ACDE58E97E37D13C, EEF688477002B28B, BD6DE5F0F0DD2B71);
	}
};
