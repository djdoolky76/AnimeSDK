#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/MonoAnimationPluginBase.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_CIBMHHNPNMO_OFFSET UNITYSDK_OFFSET(0x180F7520)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_DFNDDEBDLHN_OFFSET UNITYSDK_OFFSET(0x180F7BB0)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_IBMJGCOOEFK_OFFSET UNITYSDK_OFFSET(0x180F7BA0)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x180F7990)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_PLAY_1_OFFSET UNITYSDK_OFFSET(0x180F7040)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_PLAY_OFFSET UNITYSDK_OFFSET(0x180F6DB0)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_POPJELIKFBB_OFFSET UNITYSDK_OFFSET(0x180F76F0)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x180F7780)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_STOPCURFADE_OFFSET UNITYSDK_OFFSET(0x180F6F50)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR_STOP_OFFSET UNITYSDK_OFFSET(0x180F7D10)
#define MOLEMOLE_MONOANIMATIONPLUGINMIRROR__CTOR_OFFSET UNITYSDK_OFFSET(0x180F7E50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAnimationPluginMirror_TypeDefinitionIndex = 71428;

	class MonoAnimationPluginMirror : public ::MoleMole::MonoAnimationPluginBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _mirrorAnims; // 0x20
		::System::Action* PKLDNNOOACL; // 0x28
		::Foundation::Coroutine::CoroutineHandle NJPPPNJABHJ; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* LJJACIGEEPI; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR__CTOR_OFFSET))(this);
		}

		::System::Boolean Play()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_PLAY_OFFSET))(this);
		}

		::System::Boolean Play_1(::System::String* HIAIKHDFCLN, ::System::Action* MGAKJHJAGJI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_PLAY_1_OFFSET))(this, HIAIKHDFCLN, MGAKJHJAGJI);
		}

		::System::Boolean SampleAnimation(::System::String* HIAIKHDFCLN, ::System::Single AHAFNGEDPLI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_SAMPLEANIMATION_OFFSET))(this, HIAIKHDFCLN, AHAFNGEDPLI);
		}

		::System::Boolean PlayAnimation(::System::String* HIAIKHDFCLN, ::System::Single AHAFNGEDPLI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_PLAYANIMATION_OFFSET))(this, HIAIKHDFCLN, AHAFNGEDPLI);
		}

		::System::Void StopCurFade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_STOPCURFADE_OFFSET))(this);
		}

		::System::Void Stop(::System::String* HIAIKHDFCLN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_STOP_OFFSET))(this, HIAIKHDFCLN);
		}

		::System::Boolean IBMJGCOOEFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_IBMJGCOOEFK_OFFSET))(this);
		}

		::System::Void DFNDDEBDLHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_DFNDDEBDLHN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* POPJELIKFBB(::System::Single KMKBJKOEBMF)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_POPJELIKFBB_OFFSET))(this, KMKBJKOEBMF);
		}

		::System::String* CIBMHHNPNMO(::System::String* BLGNOOLDEOF)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINMIRROR_CIBMHHNPNMO_OFFSET))(this, BLGNOOLDEOF);
		}
	};
}
