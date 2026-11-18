#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_71C045BD1461B1DD_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1F44F480)
#define IFIX_IFIXPATCHED_71C045BD1461B1DD_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1F44F440)
#define IFIX_IFIXPATCHED_71C045BD1461B1DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F44F430)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_71C045BD1461B1DD_TypeDefinitionIndex = 96440;

	class IFixPatched_71C045BD1461B1DD : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_71C045BD1461B1DD__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_71C045BD1461B1DD_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_71C045BD1461B1DD_ISPATCHED_OFFSET))(id);
		}
	};
}
