#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHJPJMKIHBG.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class DownloadDiffPatcher_DiffResult; }
namespace Foundation { class ExceptionInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_DOWNLOADDIFFPATCHER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142C0900)
#define FOUNDATION_DOWNLOADDIFFPATCHER___C__CHECKSPACEENOUGH_B__31_0_OFFSET UNITYSDK_OFFSET(0x142C0A70)
#define FOUNDATION_DOWNLOADDIFFPATCHER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142C0940)
#define FOUNDATION_DOWNLOADDIFFPATCHER___C__FINISH_B__28_0_OFFSET UNITYSDK_OFFSET(0x142C0950)
#define FOUNDATION_DOWNLOADDIFFPATCHER___C__FINISH_B__28_1_OFFSET UNITYSDK_OFFSET(0x142C09D0)
#define FOUNDATION_DOWNLOADDIFFPATCHER___C__FINISH_B__28_2_OFFSET UNITYSDK_OFFSET(0x142C0A60)

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher___c_TypeDefinitionIndex = 62282;

	class DownloadDiffPatcher___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DownloadDiffPatcher___c_TypeDefinitionIndex)->GetStaticField(0x31B20);
		}
		static ::System::Func_2<::System::Object*, ::Foundation::ExceptionInfo*>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::System::Object*, ::Foundation::ExceptionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DownloadDiffPatcher___c_TypeDefinitionIndex)->GetStaticField(0x31B28);
		}
		static ::System::Action_1<::Foundation::ExceptionInfo*>** StaticGet___9__28_2()
		{
			return (::System::Action_1<::Foundation::ExceptionInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DownloadDiffPatcher___c_TypeDefinitionIndex)->GetStaticField(0x31B30);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DownloadDiffPatcher___c_TypeDefinitionIndex)->GetStaticField(0x31B38);
		}
		static ::System::Func_2<::FHJPJMKIHBG, ::System::Int64>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::FHJPJMKIHBG, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(DownloadDiffPatcher___c_TypeDefinitionIndex)->GetStaticField(0x31B40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Finish_b__28_0(::Foundation::DownloadDiffPatcher_DiffResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::DownloadDiffPatcher_DiffResult*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__FINISH_B__28_0_OFFSET))(this, result);
		}

		::Foundation::ExceptionInfo* _Finish_b__28_1(::Foundation::DownloadDiffPatcher_DiffResult* result)
		{
			return ((::Foundation::ExceptionInfo*(*)(::PVOID, ::Foundation::DownloadDiffPatcher_DiffResult*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__FINISH_B__28_1_OFFSET))(this, result);
		}

		::System::Void _Finish_b__28_2(::Foundation::ExceptionInfo* error)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ExceptionInfo*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__FINISH_B__28_2_OFFSET))(this, error);
		}

		::System::Int64 _CheckSpaceEnough_b__31_0(::FHJPJMKIHBG filePickInfo)
		{
			return ((::System::Int64(*)(::PVOID, ::FHJPJMKIHBG))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__CHECKSPACEENOUGH_B__31_0_OFFSET))(this, filePickInfo);
		}
	};
}
