#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGELHCKMLNK;
namespace System { class Object; }

#define EGELHCKMLNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2663A0)
#define EGELHCKMLNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2663E0)
#define EGELHCKMLNK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E2663F0)

inline static constexpr unsigned int EGELHCKMLNK___c_TypeDefinitionIndex = 32503;

	class EGELHCKMLNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGELHCKMLNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGELHCKMLNK___C_CTOR_OFFSET))(this);
		}

		::EGELHCKMLNK* __cctor_b__38_0()
		{
			return ((::EGELHCKMLNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGELHCKMLNK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
