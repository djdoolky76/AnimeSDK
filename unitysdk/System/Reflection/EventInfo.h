#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BF260D6A8F0D7450.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/A6046EFADF4324A1.h"
#include "unitysdk/E2DE926113CB084F.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class EventInfo_E1DDD21460EC2D17; }

#define SYSTEM_REFLECTION_EVENTINFO_A13F879C05E38EE6_OFFSET UNITYSDK_OFFSET(0x3B685D0)
#define SYSTEM_REFLECTION_EVENTINFO_A7EF90431CDD2732_OFFSET UNITYSDK_OFFSET(0x3B68610)
#define SYSTEM_REFLECTION_EVENTINFO_AB5BE41A5064DDFC_OFFSET UNITYSDK_OFFSET(0x3B685E0)
#define SYSTEM_REFLECTION_EVENTINFO_AE1A0863005E0599_OFFSET UNITYSDK_OFFSET(0x3B68490)
#define SYSTEM_REFLECTION_EVENTINFO_E7483E7CBF06BCFD_OFFSET UNITYSDK_OFFSET(0x3B683B0)
#define SYSTEM_REFLECTION_EVENTINFO_F3A7145D0655067C_OFFSET UNITYSDK_OFFSET(0x17B7850)
#define SYSTEM_REFLECTION_EVENTINFO_F81171A7FCF10E50_OFFSET UNITYSDK_OFFSET(0x3B683C0)
#define SYSTEM_REFLECTION_EVENTINFO_FB0BEF09EFF1A265_OFFSET UNITYSDK_OFFSET(0x3B684A0)
#define SYSTEM_REFLECTION_EVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace System::Reflection
{
	inline static constexpr unsigned int EventInfo_TypeDefinitionIndex = 10324;

	class EventInfo : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Reflection::EventInfo_E1DDD21460EC2D17* AA9E6DD7A51D26F6; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Reflection::EventInfo* F81171A7FCF10E50(::A6046EFADF4324A1 E38FD399E4DFEF27, ::E2DE926113CB084F BF1803D70DB43E5E)
		{
			return ((::System::Reflection::EventInfo*(*)(::A6046EFADF4324A1, ::E2DE926113CB084F))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_F81171A7FCF10E50_OFFSET))(E38FD399E4DFEF27, BF1803D70DB43E5E);
		}

		::System::Boolean E7483E7CBF06BCFD(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_E7483E7CBF06BCFD_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Type* FB0BEF09EFF1A265()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_FB0BEF09EFF1A265_OFFSET))(this);
		}

		static ::System::Reflection::EventInfo* A13F879C05E38EE6(::System::IntPtr F74ABEF078D95DD7, ::System::IntPtr AB5DC9084EA94AC0)
		{
			return ((::System::Reflection::EventInfo*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_A13F879C05E38EE6_OFFSET))(F74ABEF078D95DD7, AB5DC9084EA94AC0);
		}

		::System::Reflection::BF260D6A8F0D7450 F3A7145D0655067C()
		{
			return ((::System::Reflection::BF260D6A8F0D7450(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_F3A7145D0655067C_OFFSET))(this);
		}

		static ::System::Boolean AB5BE41A5064DDFC(::System::Reflection::EventInfo* A11D4EC92205DAEE, ::System::Reflection::EventInfo* F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_AB5BE41A5064DDFC_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}

		static ::System::Boolean A7EF90431CDD2732(::System::Reflection::EventInfo* A11D4EC92205DAEE, ::System::Reflection::EventInfo* F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_A7EF90431CDD2732_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}

		::System::Int32 AE1A0863005E0599()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_AE1A0863005E0599_OFFSET))(this);
		}
	};
}
