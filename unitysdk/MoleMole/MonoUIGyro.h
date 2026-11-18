#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class MonoUIGyro_ManipulatedTransform; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOUIGYRO_AWAKE_OFFSET UNITYSDK_OFFSET(0x139FA3D0)
#define MOLEMOLE_MONOUIGYRO_TRANSTIONBYGYRO_OFFSET UNITYSDK_OFFSET(0x139FA800)
#define MOLEMOLE_MONOUIGYRO_UPDATE_OFFSET UNITYSDK_OFFSET(0x139FA6A0)
#define MOLEMOLE_MONOUIGYRO__CTOR_OFFSET UNITYSDK_OFFSET(0x139FAB00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIGyro_TypeDefinitionIndex = 56638;

	class MonoUIGyro : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Single translationalSpeed; // 0x58
		::System::Single translationalRange; // 0x5C
		::System::Collections::Generic::List_1<::System::Object*>* whiteList; // 0x60
		::System::Boolean _isGyroEnable; // 0x68
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* _manipulatedTransforms; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGYRO__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGYRO_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGYRO_UPDATE_OFFSET))(this);
		}

		::System::Void TranstionByGyro(::MoleMole::MonoUIGyro_ManipulatedTransform* mTrans)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUIGyro_ManipulatedTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGYRO_TRANSTIONBYGYRO_OFFSET))(this, mTrans);
		}
	};
}
