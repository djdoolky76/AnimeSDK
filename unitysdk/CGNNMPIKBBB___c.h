#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGNNMPIKBBB;
namespace System { class Object; }

#define CGNNMPIKBBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E08A1B0)
#define CGNNMPIKBBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E08A1E0)
#define CGNNMPIKBBB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E08A1F0)

inline static constexpr unsigned int CGNNMPIKBBB___c_TypeDefinitionIndex = 32663;

	class CGNNMPIKBBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGNNMPIKBBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNNMPIKBBB___C_CTOR_OFFSET))(this);
		}

		::CGNNMPIKBBB* __cctor_b__33_0()
		{
			return ((::CGNNMPIKBBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNNMPIKBBB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
