#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class OIJOKMHJKLJ;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MPJFIPNGENE_FKPNCJBNGOH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EC23160)
#define MPJFIPNGENE_FKPNCJBNGOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC23070)
#define MPJFIPNGENE_FKPNCJBNGOH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EC231C0)
#define MPJFIPNGENE_FKPNCJBNGOH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EC22970)

inline static constexpr unsigned int MPJFIPNGENE_FKPNCJBNGOH_TypeDefinitionIndex = 44032;

	class MPJFIPNGENE_FKPNCJBNGOH : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MPJFIPNGENE_FKPNCJBNGOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::OIJOKMHJKLJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + MPJFIPNGENE_FKPNCJBNGOH_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::OIJOKMHJKLJ* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::OIJOKMHJKLJ*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_FKPNCJBNGOH_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_FKPNCJBNGOH_ENDINVOKE_OFFSET))(this, a1);
		}

	};
