#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class OIJOKMHJKLJ;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MPJFIPNGENE_BINIMIDHMOP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EC22F70)
#define MPJFIPNGENE_BINIMIDHMOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC22E80)
#define MPJFIPNGENE_BINIMIDHMOP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EC22FA0)
#define MPJFIPNGENE_BINIMIDHMOP_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EC22950)

inline static constexpr unsigned int MPJFIPNGENE_BINIMIDHMOP_TypeDefinitionIndex = 44031;

	class MPJFIPNGENE_BINIMIDHMOP : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MPJFIPNGENE_BINIMIDHMOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::OIJOKMHJKLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_BINIMIDHMOP_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::OIJOKMHJKLJ* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::OIJOKMHJKLJ*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_BINIMIDHMOP_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_BINIMIDHMOP_ENDINVOKE_OFFSET))(this, a1);
		}

	};
