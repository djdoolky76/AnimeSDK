#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { template <typename T> class Action_1; }

#define GAPLMNEDDEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x15944D80)
#define GAPLMNEDDEH_PDBFIPDHACD_OFFSET UNITYSDK_OFFSET(0x15944CF0)

inline static constexpr unsigned int GAPLMNEDDEH_TypeDefinitionIndex = 49768;

	class GAPLMNEDDEH : public ::System::Object
	{
	public:
		static ::System::Action_1<::LBJLBMOOJGM*>** StaticGet_BEJJCPGEMIG()
		{
			return (::System::Action_1<::LBJLBMOOJGM*>**)UnitySDK::FromName("", "GAPLMNEDDEH")->GetStaticField(0x5EFD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAPLMNEDDEH_CCTOR_OFFSET))();
		}

		static ::System::Void PDBFIPDHACD(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + GAPLMNEDDEH_PDBFIPDHACD_OFFSET))(a1);
		}

	};
