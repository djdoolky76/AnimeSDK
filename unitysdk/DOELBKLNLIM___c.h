#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOELBKLNLIM;
namespace System { class Object; }

#define DOELBKLNLIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FF210)
#define DOELBKLNLIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FF250)
#define DOELBKLNLIM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1FF260)

inline static constexpr unsigned int DOELBKLNLIM___c_TypeDefinitionIndex = 28964;

	class DOELBKLNLIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOELBKLNLIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOELBKLNLIM___C_CTOR_OFFSET))(this);
		}

		::DOELBKLNLIM* __cctor_b__38_0()
		{
			return ((::DOELBKLNLIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOELBKLNLIM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
