#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class DJKHNKJFMJO;
class FJMFECAAPHD;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define TASKTREETEST_BUILDTASK_OFFSET UNITYSDK_OFFSET(0x1C6BF630)
#define TASKTREETEST_BUILDTREE_OFFSET UNITYSDK_OFFSET(0x1C6BF3B0)
#define TASKTREETEST_DELAYTEST_OFFSET UNITYSDK_OFFSET(0x1C6BF280)
#define TASKTREETEST_ROOTBEGIN_OFFSET UNITYSDK_OFFSET(0x1C6BF720)
#define TASKTREETEST_ROOTCANCEL_OFFSET UNITYSDK_OFFSET(0x1C6BF9A0)
#define TASKTREETEST_ROOTEND_OFFSET UNITYSDK_OFFSET(0x1C6BF860)
#define TASKTREETEST_SETTASK_OFFSET UNITYSDK_OFFSET(0x1C6BF300)
#define TASKTREETEST_START_OFFSET UNITYSDK_OFFSET(0x1C6BEF30)
#define TASKTREETEST_TESTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C6BEFF0)
#define TASKTREETEST_TEST_OFFSET UNITYSDK_OFFSET(0x1C6BEE60)
#define TASKTREETEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BFAE0)

inline static constexpr unsigned int TaskTreeTest_TypeDefinitionIndex = 77736;

class TaskTreeTest : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__CTOR_OFFSET))(this);
	}

	::System::Void Test()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_TEST_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_START_OFFSET))(this);
	}

	::System::Void TestComplete()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_TESTCOMPLETE_OFFSET))(this);
	}

	::System::Collections::IEnumerator* DelayTest(::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>* completionSource)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>*))((::PBYTE)hIl2Cpp + TASKTREETEST_DELAYTEST_OFFSET))(this, completionSource);
	}

	::System::Void SetTask(::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>* taskCompletionSource)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>*))((::PBYTE)hIl2Cpp + TASKTREETEST_SETTASK_OFFSET))(this, taskCompletionSource);
	}

	::DJKHNKJFMJO* BuildTree(::System::String* name)
	{
		return ((::DJKHNKJFMJO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TASKTREETEST_BUILDTREE_OFFSET))(this, name);
	}

	::System::Void RootBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_ROOTBEGIN_OFFSET))(this);
	}

	::System::Void RootEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_ROOTEND_OFFSET))(this);
	}

	::System::Void RootCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_ROOTCANCEL_OFFSET))(this);
	}

	::FJMFECAAPHD* BuildTask(::DJKHNKJFMJO* taskTree, ::System::String* name, ::System::Int32 ms)
	{
		return ((::FJMFECAAPHD*(*)(::PVOID, ::DJKHNKJFMJO*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + TASKTREETEST_BUILDTASK_OFFSET))(this, taskTree, name, ms);
	}
};
