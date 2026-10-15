#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMPCODLIOLG;
class GIPOOAFFGMM;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

inline static constexpr unsigned int GIPOOAFFGMM___O_TypeDefinitionIndex = 72062;

	class GIPOOAFFGMM___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::GIPOOAFFGMM*, ::FMPCODLIOLG*>** StaticGet__1____CreateTestPanel()
		{
			return (::System::Func_2<::GIPOOAFFGMM*, ::FMPCODLIOLG*>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x68680);
		}

		static ::System::Func_2<::GIPOOAFFGMM*, ::FMPCODLIOLG*>** StaticGet__3____CreateGridFightPanel()
		{
			return (::System::Func_2<::GIPOOAFFGMM*, ::FMPCODLIOLG*>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x68688);
		}

		static ::System::Func_1<::System::Boolean>** StaticGet__2____CanCreateGridFightPanel()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x68690);
		}

		static ::System::Func_1<::System::Boolean>** StaticGet__0____CanCreateTestPanel()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x68698);
		}

	};
