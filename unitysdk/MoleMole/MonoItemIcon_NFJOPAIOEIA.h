#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONOITEMICON_NFJOPAIOEIA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x146999B0)
#define MOLEMOLE_MONOITEMICON_NFJOPAIOEIA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14699A80)
#define MOLEMOLE_MONOITEMICON_NFJOPAIOEIA_INVOKE_OFFSET UNITYSDK_OFFSET(0x14699640)
#define MOLEMOLE_MONOITEMICON_NFJOPAIOEIA__CTOR_OFFSET UNITYSDK_OFFSET(0x14699630)

namespace MoleMole
{
	inline static constexpr unsigned int MonoItemIcon_NFJOPAIOEIA_TypeDefinitionIndex = 92029;

	class MonoItemIcon_NFJOPAIOEIA : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_NFJOPAIOEIA__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Void Invoke(::System::Int32 FOLKIBNJNHM, ::System::UInt64 MBCHJLKKNEP, ::System::Int32 KFPIOFECALJ, ::System::Int32 HABOEFONCNL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_NFJOPAIOEIA_INVOKE_OFFSET))(this, FOLKIBNJNHM, MBCHJLKKNEP, KFPIOFECALJ, HABOEFONCNL);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 FOLKIBNJNHM, ::System::UInt64 MBCHJLKKNEP, ::System::Int32 KFPIOFECALJ, ::System::Int32 HABOEFONCNL, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_NFJOPAIOEIA_BEGININVOKE_OFFSET))(this, FOLKIBNJNHM, MBCHJLKKNEP, KFPIOFECALJ, HABOEFONCNL, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_NFJOPAIOEIA_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
