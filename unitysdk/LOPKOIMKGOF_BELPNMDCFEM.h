#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LOPKOIMKGOF_BELPNMDCFEM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB80D870)
#define LOPKOIMKGOF_BELPNMDCFEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB80D800)
#define LOPKOIMKGOF_BELPNMDCFEM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB80D8F0)
#define LOPKOIMKGOF_BELPNMDCFEM_INVOKE_OFFSET UNITYSDK_OFFSET(0xB80C8F0)

inline static constexpr unsigned int LOPKOIMKGOF_BELPNMDCFEM_TypeDefinitionIndex = 78787;

	class LOPKOIMKGOF_BELPNMDCFEM : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_BELPNMDCFEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_BELPNMDCFEM_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::Single a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_BELPNMDCFEM_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_BELPNMDCFEM_ENDINVOKE_OFFSET))(this, a1);
		}

	};
