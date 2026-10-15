#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GMEDAMAOAIN;
class HEOLKMLMPML;
class NCFDMBOBAGN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTRICHTEXT_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1F0710)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_1_OFFSET UNITYSDK_OFFSET(0xD1F0050)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_2_OFFSET UNITYSDK_OFFSET(0xD1F0230)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_3_OFFSET UNITYSDK_OFFSET(0xD1F0350)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_4_OFFSET UNITYSDK_OFFSET(0xD1DE360)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_5_OFFSET UNITYSDK_OFFSET(0xD1F0550)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_6_OFFSET UNITYSDK_OFFSET(0xD1DE9B0)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_7_OFFSET UNITYSDK_OFFSET(0xD1F0470)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_8_OFFSET UNITYSDK_OFFSET(0xD1F0620)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_9_OFFSET UNITYSDK_OFFSET(0xD1F0160)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xD1F0700)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRichText_TypeDefinitionIndex = 65307;

	class GridFightRichText : public ::System::Object
	{
	public:
		static ::GMEDAMAOAIN** StaticGet__Parser()
		{
			return (::GMEDAMAOAIN**)UnitySDK::FromName("RPG.Client", "GridFightRichText")->GetStaticField(0x6E240);
		}

		static ::NCFDMBOBAGN** StaticGet__Compiler()
		{
			return (::NCFDMBOBAGN**)UnitySDK::FromName("RPG.Client", "GridFightRichText")->GetStaticField(0x6E248);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_CCTOR_OFFSET))();
		}

		static ::System::String* Compile_1(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_1_OFFSET))(a1, a2);
		}

		static ::System::String* Compile_2(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::HEOLKMLMPML* a3)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::HEOLKMLMPML*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Compile_3(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::System::Collections::Generic::IEnumerable_1<::HEOLKMLMPML*>* a3)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::IEnumerable_1<::HEOLKMLMPML*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Compile_4(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::Il2CppArray<::HEOLKMLMPML*>* a3)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Il2CppArray<::HEOLKMLMPML*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_4_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Compile_5(::RPG::Client::TextID a1)
		{
			return ((::System::String*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_5_OFFSET))(a1);
		}

		static ::System::String* Compile_6(::System::String* a1, ::HEOLKMLMPML* a2)
		{
			return ((::System::String*(*)(::System::String*, ::HEOLKMLMPML*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_6_OFFSET))(a1, a2);
		}

		static ::System::String* Compile_7(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::HEOLKMLMPML*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::HEOLKMLMPML*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_7_OFFSET))(a1, a2);
		}

		static ::System::String* Compile_8(::System::String* a1, ::Il2CppArray<::HEOLKMLMPML*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::HEOLKMLMPML*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_8_OFFSET))(a1, a2);
		}

		static ::System::String* Compile_9(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_9_OFFSET))(a1);
		}

	};
}
