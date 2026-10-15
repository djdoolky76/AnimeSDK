#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGBPOHBACGE;
namespace System { class Object; }

#define CGBPOHBACGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0ACE80)
#define CGBPOHBACGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0ACEC0)
#define CGBPOHBACGE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E0ACED0)

inline static constexpr unsigned int CGBPOHBACGE___c_TypeDefinitionIndex = 29921;

	class CGBPOHBACGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGBPOHBACGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBPOHBACGE___C_CTOR_OFFSET))(this);
		}

		::CGBPOHBACGE* __cctor_b__38_0()
		{
			return ((::CGBPOHBACGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBPOHBACGE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
