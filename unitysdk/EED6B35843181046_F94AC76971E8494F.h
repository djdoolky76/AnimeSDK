#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A43E17088A8BDC3E/B1457059A0469A50.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EED6B35843181046_F94AC76971E8494F_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define EED6B35843181046_F94AC76971E8494F__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

inline static constexpr unsigned int EED6B35843181046_F94AC76971E8494F_TypeDefinitionIndex = 11979;

class EED6B35843181046_F94AC76971E8494F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_F94AC76971E8494F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::A43E17088A8BDC3E::B1457059A0469A50 B3DB603B3C40575D, ::Il2CppArray<::System::Single>* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::A43E17088A8BDC3E::B1457059A0469A50, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + EED6B35843181046_F94AC76971E8494F_INVOKE_OFFSET))(this, B3DB603B3C40575D, F220A2D27F7C6B6C);
	}
};
